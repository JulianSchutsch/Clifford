import argumentparser
import os
import clifford

CPP_INDENT = 2

def ensurePath(fn):
  dirName = os.path.dirname(fn)
  if dirName!="" and not os.path.exists(dirName):
    os.makedirs(dirName)
  return fn

class CPPWriter:
    def __init__(self, filename):
        self.__filename = filename
        self.__indent = 0
        self.__indentStack = []

    def write(self, line):
        self.__file.write(self.__indent*" "+line+"\n")

    def writeLeft(self, line):
        self.__file.write(self.__indentStack[len(self.__indentStack)-1]*" "+line+"\n")

    def indent(self, a):
        self.__indentStack.append(self.__indent)
        self.__indent += a

    def unindent(self):
        self.__indent = self.__indentStack.pop()

    def __enter__(self):
        self.__file = open(ensurePath(self.__filename), "w+")
        return self

    def __exit__(self, exc_type, exc_val, exc_tb):
        self.__file.close()

class CPPNamespace:
    def __init__(self, writer, name):
        self.writer = writer
        self.name = name

    def __enter__(self):
        self.writer.write('namespace '+self.name+'{')
        self.writer.indent(CPP_INDENT)

    def __exit__(self, exc_type, exc_val, exc_tb):
        self.writer.unindent()
        self.writer.write('}')

class CPPStruct:
    def __init__(self, writer, name, asClass):
        self.writer = writer
        self.name = name
        self.asClass = asClass

    def __enter__(self):
        if self.asClass:
            self.writer.write('class '+self.name+'{')
        else:
            self.writer.write('struct '+self.name+'{')
        self.writer.indent(CPP_INDENT)
        return self

    def public(self):
        self.writer.writeLeft('public:')

    def __exit__(self, exc_type, exc_val, exc_tb):
        self.writer.unindent()
        self.writer.write('};')

typePrefix = "G"

def generateCpp_ForwardDeclarations(group, writer):
    for multivectorType in group.iterMultivectorTypes():
        writer.write("class %s;"%(typePrefix+multivectorType.name()))
    return

def generateCpp_Classes(group, writer):

    def generateFunc_Str(multivectorType):
        writer.write("std::string str(){")
        writer.indent(CPP_INDENT)
        writer.write("std::stringstream result;")
        for blade, bladeElement in multivectorType.iterElements():
            writer.write('if(v%i[%i]!=0) result<<' % (
            blade, bladeElement) + '(result.tellp()==0?"":"+")<<' + 'v%i[%i]<<"%s";' % (
                         blade, bladeElement, group.elementStr(blade, bladeElement)))
        writer.write("return result.str();")
        writer.unindent()
        writer.write("}")
        return

    def generateFunc_HasBlade(multivectorType):
        writer.write("bool hasBlade(unsigned int blade){")
        writer.indent(CPP_INDENT)
        writer.write("switch(blade){")
        writer.indent(CPP_INDENT)
        for index in multivectorType.iterEnabled():
            writer.write("case %i:" % index)
        writer.indent(CPP_INDENT)
        writer.write("return true;")
        writer.unindent()
        writer.unindent()
        writer.write("}")
        writer.write("return false;")
        writer.unindent()
        writer.write("}")
        return

    def generateOperators(multivectorTypeA):
        multivectorA = multivectorTypeA.generateMultivector("v%blade%[%bladeElement%]")
        for multivectorTypeB in group.iterMultivectorTypes():
            multivectorB = multivectorTypeB.generateMultivector("other.v%blade%[%bladeElement%]")
            typeNameB = typePrefix+multivectorTypeB.name()

            sum = multivectorA + multivectorB
            sumType = sum.getMultivectorType()
            sumTypeName = typePrefix + sumType.name()

            mul = multivectorA * multivectorB
            mulType = mul.getMultivectorType()
            mulTypeName = typePrefix + mulType.name()

            writer.write("constexpr %s operator + (const %s& r);" % (sumTypeName, typeNameB))
            writer.write("constexpr %s operator - (const %s& r);" % (sumTypeName, typeNameB))
            writer.write("constexpr %s operator * (const %s& r);" % (mulTypeName, typeNameB))
            writer.write("bool approxEqual (const %s& r);" %typeNameB)
        return

    for multivectorType in group.iterMultivectorTypes():
        typeName = typePrefix + multivectorType.name()
        with CPPStruct(writer, typeName, asClass=True) as struct:
            for index in multivectorType.iterEnabled():
                writer.write("Blade%i v%i;"%(index, index))
            for friendVectorType in group.iterMultivectorTypes():
                if not multivectorType.equal(friendVectorType):
                    friendVectorName = typePrefix + friendVectorType.name()
                    writer.write("friend class %s;"%friendVectorName)
            struct.public()
            generateFunc_Str(multivectorType)
            generateFunc_HasBlade(multivectorType)
            writer.write("constexpr %s operator * (const %s factor);" % (typeName, settings.cpp_type));
            writer.write("constexpr %s(%s)"%(typeName, ", ".join(["%s p%i_%i"%(settings.cpp_type, i, e) for i,e in multivectorType.iterElements()])))
            lineStart = ":"
            for i in multivectorType.iterEnabled():
                writer.write("%s v%i{%s}"%(lineStart, i, ", ".join(["p%i_%i"%(i, e) for e in range(group.bladeLengths[i])])))
                lineStart = ","
            writer.write('{}')
            for index in multivectorType.iterEnabled():
                writer.write("Blade%i& blade%i() {return v%i;}"%(index, index, index))
            generateOperators(multivectorType)
    return

def generateCpp_Blades(group, settings, writer):
    for index in range(group.bladeCount):
        writer.write("typedef %s Blade%i[%i];"%(settings.cpp_type, index, group.bladeLengths[index]))
    return

def generateCpp_ApproxEqual(group, writer):
    for multivectorTypeA in group.iterMultivectorTypes():
        multivectorA = multivectorTypeA.generateMultivector("v%blade%[%bladeElement%]")
        typeNameA = typePrefix + multivectorTypeA.name()
        for multivectorTypeB in group.iterMultivectorTypes():
            multivectorB = multivectorTypeB.generateMultivector("other.v%blade%[%bladeElement%]")
            typeNameB = typePrefix + multivectorTypeB.name()

            diff = multivectorB - multivectorA
            diffType = diff.getMultivectorType()
            equalCalc = " && ".join(["fabs(%s)<epsilon"%str(diff.getCoefficient(i)) for i in diffType.iterElements()])

            writer.write("bool %s::approxEqual (const %s& other){"%(typeNameA, typeNameB))
            writer.indent(CPP_INDENT)
            writer.write("return %s;"%equalCalc)
            writer.unindent()
            writer.write("}")
    return

def generateCpp_Subtractions(group, writer):
    for multivectorTypeA in group.iterMultivectorTypes():
        multivectorA = multivectorTypeA.generateMultivector("v%blade%[%bladeElement%]")
        typeNameA = typePrefix+multivectorTypeA.name()
        for multivectorTypeB in group.iterMultivectorTypes():
            multivectorB = multivectorTypeB.generateMultivector("other.v%blade%[%bladeElement%]")
            typeNameB = typePrefix+multivectorTypeB.name()

            diff = multivectorA - multivectorB
            diffType = diff.getMultivectorType()
            diffTypeName = typePrefix+diffType.name()
            diffCalc = ", ".join([str(diff.getCoefficient(i)) for i in diffType.iterElements()])

            writer.write("constexpr %s %s::operator - (const %s& other){"%(diffTypeName, typeNameA, typeNameB))
            writer.indent(CPP_INDENT)
            writer.write("return %s(%s);"%(diffTypeName, diffCalc))
            writer.unindent()
            writer.write("}")
    return

def generateCpp_Additions(group, writer):
    for multivectorTypeA in group.iterMultivectorTypes():
        multivectorA = multivectorTypeA.generateMultivector("v%blade%[%bladeElement%]")
        typeNameA = typePrefix+multivectorTypeA.name()
        for multivectorTypeB in group.iterMultivectorTypes():
            multivectorB = multivectorTypeB.generateMultivector("other.v%blade%[%bladeElement%]")
            typeNameB = typePrefix+multivectorTypeB.name()
            sum = multivectorA + multivectorB
            sumType = sum.getMultivectorType()
            sumTypeName = typePrefix+sumType.name()
            sumCalc = ", ".join([str(sum.getCoefficient(i)) for i in sumType.iterElements()])
            writer.write("constexpr %s %s::operator + (const %s& other){"%(sumTypeName, typeNameA, typeNameB))
            writer.indent(CPP_INDENT)
            writer.write("return %s(%s);"%(sumTypeName, sumCalc))
            writer.unindent()
            writer.write("}")
    return

def generateCpp_Multiplications(group, writer):
    for multivectorTypeA in group.iterMultivectorTypes():
        multivectorA = multivectorTypeA.generateMultivector("v%blade%[%bladeElement%]")
        typeNameA = typePrefix + multivectorTypeA.name()
        for multivectorTypeB in group.iterMultivectorTypes():
            multivectorB = multivectorTypeB.generateMultivector("other.v%blade%[%bladeElement%]")
            product = multivectorA*multivectorB
            productType = product.getMultivectorType()
            productTypeName = typePrefix+productType.name()
            typeNameB = typePrefix+multivectorTypeB.name()
            writer.write("constexpr %s %s::operator * (const %s& other){"%(productTypeName, typeNameA, typeNameB))
            writer.indent(CPP_INDENT)
            productCalc = ", ".join([str(product.getCoefficient(i)) for i in productType.iterElements()])
            writer.write("  return %s(%s);"%(productTypeName, productCalc))
            writer.unindent()
            writer.write("}")
    return

def generateCpp_ScalarMultiplication(group, writer, settings):
    for multivectorType in group.iterMultivectorTypes():
        structName = typePrefix+multivectorType.name()
        writer.write("constexpr %s %s::operator * (const %s factor){" % (structName, structName, settings.cpp_type));
        writer.indent(CPP_INDENT);
        mulStr = ", ".join(["factor*v%i[%i]" % (i, e) for i, e in multivectorType.iterElements()])
        writer.write("return %s(%s);" % (structName, mulStr))
        writer.unindent();
        writer.write("}")
        writer.write("constexpr %s operator * (const %s factor, const %s& multivector){" % (
        structName, settings.cpp_type, structName))
        writer.indent(CPP_INDENT);
        writer.write("return multivector*factor;")
        writer.unindent()
        writer.write("}")
    return

def generateElements(group, writer):
    for multivectorType in group.iterMultivectorTypes():
        if multivectorType.length()==1:
            typeName = typePrefix + multivectorType.name()
            for blade, bladeElement in multivectorType.iterElements():
                elementName = group.elementStr(blade, bladeElement)
                initStr = ", ".join([("1" if e == bladeElement else "0") for b, e in multivectorType.iterElements()])
                writer.write("static const %s %s(%s);" % (typeName, elementName, initStr))
    return

def generateOperations(group, writer, settings):
    if not settings.operationScript:
        return

def generateCpp(settings):
    cliffordGroup = clifford.Group(settings.elementCount, settings.metric, settings.bladeScript)

    with CPPWriter(settings.cpp_header) as writer:
        writer.write("#include <string>")
        writer.write("#include <sstream>")
        writer.write("#include <cmath>")
        writer.write("#include <limits>")
        writer.write("static const %s epsilon = std::numeric_limits<%s>::epsilon();"%(settings.cpp_type, settings.cpp_type));
        with CPPNamespace(writer, settings.cpp_namespace):
            generateCpp_Blades(cliffordGroup, settings, writer)
            generateCpp_ForwardDeclarations(cliffordGroup, writer)
            generateCpp_Classes(cliffordGroup, writer)
            generateCpp_Subtractions(cliffordGroup, writer)
            generateCpp_Additions(cliffordGroup, writer)
            generateCpp_Multiplications(cliffordGroup, writer)
            generateCpp_ApproxEqual(cliffordGroup, writer)
            generateCpp_ScalarMultiplication(cliffordGroup, writer, settings)
            generateElements(cliffordGroup, writer)
            generateOperations(cliffordGroup, writer, settings)
    return

try:
    settings = argumentparser.parseArguments()
    if settings.generate_cpp:
        generateCpp(settings)
except argumentparser.FailedParse as parseError:
    print(str(parseError))
