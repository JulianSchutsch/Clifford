import argumentparser
import blades

CPP_INDENT = 2

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
        self.__file = open(self.__filename, "w+")
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

def generateCpp_ForwardDeclarations(bladeGroup, writer):
    for blade in bladeGroup.iter():
        writer.write("class %s;"%(typePrefix+blade.name()))
    return

def generateCpp_Classes(bladeGroup, writer):
    for blade in bladeGroup.iter():
        structName = typePrefix+blade.name()
        with CPPStruct(writer, structName, asClass=True) as struct:
            for index in blade.iterActive():
                writer.write("Blade%i v%i;"%(index, index))
            for friendBlade in bladeGroup.iter():
                if not blade.equal(friendBlade):
                    writer.write("friend class G%s;"%(friendBlade.name()))
            struct.public()
            writer.write("std::string str(){")
            writer.indent(CPP_INDENT)
            writer.write("std::stringstream result;")
            first = True
            for index, element in blade.iterElements():
                writer.write('if(v%i[%i]!=0) result<<'%(index, element)+'(result.tellp()==0?"":"+")<<'+'v%i[%i]<<"%s";'%(index, element, bladeGroup.elementStr(index, element)))
                first= False
            writer.write("return result.str();")
            writer.unindent()
            writer.write("}")
            writer.write("constexpr %s(%s)"%(structName, ", ".join(["%s p%i_%i"%(settings.cpp_type, i, e) for i,e in blade.iterElements()])))
            lineStart = ":"
            for i in blade.iterActive():
                writer.write("%s v%i{%s}"%(lineStart, i, ", ".join(["p%i_%i"%(i, e) for e in range(bladeGroup.bladeLengths[i])])))
                lineStart = ","
            writer.write('{}')
            for index in blade.iterActive():
                writer.write("Blade%i& blade%i() {return v%i;}"%(index, index, index))
            for partnerBlade in bladeGroup.iter():
                sumBlade = blade+partnerBlade
                sumName = typePrefix+sumBlade.name()
                mulBlade = blade*partnerBlade
                mulName = typePrefix+mulBlade.name()
                writer.write("constexpr %s operator + (const %s& r);"%(sumName, typePrefix+partnerBlade.name()))
                writer.write("constexpr %s operator * (const %s& r);"%(mulName, typePrefix+partnerBlade.name()))
    return

def generateCpp_Blades(bladeGroup, settings, writer):
    for index in range(bladeGroup.bladeCount):
        writer.write("typedef %s Blade%i[%i];"%(settings.cpp_type, index, bladeGroup.bladeLengths[index]))
    return

def generateCpp_Additions(bladeGroup, writer):
    for blade in bladeGroup.iter():
        structName = typePrefix+blade.name()
        for partnerBlade in bladeGroup.iter():
            sumBlade = blade+partnerBlade
            sumName = typePrefix+sumBlade.name()
            writer.write("constexpr %s %s::operator + (const %s& r){"%(sumName, structName, typePrefix+partnerBlade.name()))
            writer.indent(CPP_INDENT)
            def sum():
                for index in range(bladeGroup.bladeCount):
                    if blade.hasBlade(index):
                        if partnerBlade.hasBlade(index):
                            yield ", ".join(["v%i[%i]+r.v%i[%i]"%(index, e, index, e) for e in range(bladeGroup.bladeLengths[index])])
                        else:
                            yield ", ".join(["v%i[%i]"%(index, e) for e in range(bladeGroup.bladeLengths[index])])
                    else:
                        if partnerBlade.hasBlade(index):
                            yield ", ".join(["r.v%i[%i]"%(index, e) for e in range(bladeGroup.bladeLengths[index])])
            writer.write("return %s(%s);"%(sumName, ", ".join(s for s in sum())))
            writer.unindent()
            writer.write("}")
    return

def generateCpp_Multiplications(bladeGroup, writer):
    for blade in bladeGroup.iter():
        structName = typePrefix+blade.name()
        for partnerBlade in bladeGroup.iter():
            mulBlade = blade*partnerBlade
            mulName = typePrefix+mulBlade.name()
            writer.write("constexpr %s %s::operator * (const %s& r){"%(mulName, structName, typePrefix+partnerBlade.name()))
            writer.indent(CPP_INDENT)
            def mul():
                for index in mulBlade.iterActive():
                    for element in range(bladeGroup.bladeLengths[index]):
                        list = bladeGroup.pullingMultiply[index, element]
                        if len(list)==0:
                            yield "0"
                        else:
                            def valid(index1, index2):
                                return blade.hasBlade(index1) and partnerBlade.hasBlade(index2)
                            r= " + ".join(["%sv%i[%i]*r.v%i[%i]"%("" if factor==1 else str(factor)+"*", index1, element1, index2, element2) for index1, element1, index2, element2, factor in list if valid(index1, index2)])
                            yield r
            writer.write("return %s(%s);"%(mulName, ", ".join(m for m in mul())))
            writer.unindent()
            writer.write("}")
    return

def generateCpp(settings):
    bladeGroup = blades.BladeGroup(settings.elementCount, settings.metric)
    with CPPWriter(settings.cpp_header) as writer:
        writer.write("#include <string>")
        writer.write("#include <sstream>")
        with CPPNamespace(writer, settings.cpp_namespace):
            generateCpp_Blades(bladeGroup, settings, writer)
            generateCpp_ForwardDeclarations(bladeGroup, writer)
            generateCpp_Classes(bladeGroup, writer)
            generateCpp_Additions(bladeGroup, writer)
            generateCpp_Multiplications(bladeGroup, writer)

try:
    settings = argumentparser.parseArguments()
    if settings.generate_cpp:
        generateCpp(settings)
except argumentparser.FailedParse as parseError:
    print(str(parseError))