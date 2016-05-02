#
# Copyright: Julian Schutsch 2016
#

# This library implements clifford algebra helper classes to support code generators
#
# The Blades Class permits calculation with abstract blades types, e.g. we know we have
#  1. A type with blade 0 and 2 (Scalar+Bivector)
#  2. A type with blade 1 (Vector)
#  We can now calculate the sum, which  will yield a type with blade 0, 1 and 2 or the product,
#  which will give us a type with blade 0,1 and 3
#
# The BladeGroup class simplifies iterating over all available blades and finding necessary factors for several
# operations. E.g. an important aspect is the pullingMultiply field, which returns a list of all possible source
# products to get a target product.
#
# Performance of this library is horrible, which is considered less important for the purpose it is used for.
#

import copy
import sympy

class Multivector:
    def __init__(self, group, coefficients):
        self.group = group
        self.coefficients = {}
        for key, coefficient in coefficients.items():
            if coefficient!=0:
                self.coefficients[key] = coefficient
        return

    def simplify(self):
        def applySimplification(coefficient, key):
            print("S("+str(key)+"):", coefficient, "->", sympy.simplify(coefficient))
            return sympy.simplify(coefficient)
        coefficients = {key:applySimplification(c, key) for key, c in self.coefficients.items()}
        return Multivector(self.group, coefficients)

    def conjugate(self):
        coefficients = {}
        for key, coefficient in self.coefficients.items():
            blade, bladeElement = key
            coefficients[key]=(-1)**(blade*(blade-1))*coefficient
        return Multivector(self.group, coefficients)

    def __add__(self, other):
        addCoefficients = copy.copy(self.coefficients)
        for key, coefficient in other.coefficients.items():
            if key in addCoefficients:
                addCoefficients[key] += coefficient
            else:
                addCoefficients[key] = coefficient
        return Multivector(self.group, addCoefficients)

    def __sub__(self, other):
        subCoefficients = copy.copy(self.coefficients)
        for key, coefficient in other.coefficients.items():
            if key in subCoefficients:
                subCoefficients[key] -= coefficient
            else:
                subCoefficients[key] = -coefficient
        return Multivector(self.group, subCoefficients)

    def __mul__(self, other):
        mulCoefficients = {}
        for keyA, coefficientA in self.coefficients.items():
            for keyB, coefficientB in other.coefficients.items():
                bladeA, bladeElementA = keyA
                bladeB, bladeElementB = keyB
                factor, targetBlade, targetBladeElement = self.group.multiplicationMap[(bladeA, bladeElementA, bladeB, bladeElementB)]
                targetKey = (targetBlade, targetBladeElement)
                adding = factor*coefficientA*coefficientB
                if targetKey in mulCoefficients:
                    mulCoefficients[targetKey] += adding
                else:
                    mulCoefficients[targetKey] = adding
        return Multivector(self.group, mulCoefficients)

    def getCoefficient(self, key):
        return self.coefficients[key] if key in self.coefficients else 0

    def getNecesaryBlades(self):
        necessaryBlades=[False for i in range(self.group.bladeCount)]
        for key in self.coefficients:
            blade, bladeElement = key
            if key in self.coefficients:
                necessaryBlades[blade] = True
        return necessaryBlades

    def __str__(self):
        def strElements():
            for blade in range(self.group.bladeCount):
                for bladeElement in range(self.group.bladeLengths[blade]):
                    key = blade, bladeElement
                    if key in self.coefficients:
                        yield str("%s*%s"%(self.coefficients[key], self.group.elementStr(blade, bladeElement)))
        return " + ".join(strElements())

    def getMultivectorType(self):
        necessaryBlades = self.getNecesaryBlades()

        # Iterate over the possible indicies and find the optimal one
        minimumDistance = self.group.bladeCount + 1
        minimumType = None
        for multivectorType in self.group.iterMultivectorTypes():
            if multivectorType.compatibleWith(necessaryBlades):
                distance = multivectorType.distanceTo(necessaryBlades)
                if distance < minimumDistance:
                    minimumType = multivectorType
                    minimumDistance = distance
        if not minimumType:
            raise Exception("There is no compatible blade available")
        return minimumType

class MultivectorType:
    def __init__(self, group, enabledBlades):
        self.group = group
        self.enabledBlades = copy.copy(enabledBlades)
        return

    def __add__(self, other):
        enabledBlades = copy.copy(self.enabledBlades)
        for pos, enabled in enumerate(other.enabledBlades):
            enabledBlades[pos]=enabledBlades[pos] or enabled
        return MultivectorType(self.group, enabledBlades)

    def length(self):
        count=0
        for i in self.enabledBlades:
            if i:
                count+=1
        return count

    def distanceTo(self, necessaryBlades):
        distance = 0
        for i in range(self.group.bladeCount):
            if self.enabledBlades[i]!=necessaryBlades[i]:
                distance+=1
        return distance

    def compatibleWith(self, necessaryBlades):
        for i in range(self.group.bladeCount):
            if necessaryBlades[i] and not self.enabledBlades[i]:
                return False
        return True

    def equal(self, other):
        for i in range(self.group.bladeCount):
            if (self.enabledBlades[i]!=other.enabledBlades[i]):
                return False
        return True

    # Return a list of all "active" blades of this type
    def iterEnabled(self):
        for index, active in enumerate(self.enabledBlades):
            if active:
                yield index

    # Helper which also yields the elements for each active blade
    def iterElements(self):
        for index, active in enumerate(self.enabledBlades):
            if active:
                for pos in range(self.group.bladeLengths[index]):
                    yield index, pos

    def generateMultivector(self, coefficientMask):
        coefficients = {}
        for blade in range(self.group.bladeCount):
            if self.enabledBlades[blade]:
                for bladeElement in range(self.group.bladeLengths[blade]):
                    symbolString = coefficientMask.replace("%blade%", str(blade))\
                                                  .replace("%bladeElement%", str(bladeElement))
                    coefficient = sympy.symbols(symbolString)
                    coefficients[(blade, bladeElement)] = coefficient
        return Multivector(self.group, coefficients)

    # The name simply is a boolean (T and F) string where T is used for all active blades
    def name(self):
        return "".join(["T" if x else "F" for x in self.enabledBlades])

    def __str__(self):
        return "Blade:"+str(self.enabledBlades)

class Group:
    def __init__(self, elementCount, metric, bladeScript):
        self.elementCount = elementCount
        self.metric = metric
        self.bladeCount = elementCount+1
        self.elements = []
        self.multiplicationMap = {}
        self.bladeLengths = []
        for index in range(self.bladeCount):
            l=[e for e in self.__generateElements(index, 0, [])]
            self.bladeLengths.append(len(l))
            self.elements.append(l)
        self.__buildMultiply()

        if bladeScript:
            self.__executeBladeScript(bladeScript)
        else:
            self.__defaultBlades()
        return

    def __iterPossibleIndicies(self):
        blade = [False for x in range(self.bladeCount)]
        for i in range(2**self.bladeCount-1):
            for index in range(self.bladeCount):
                blade[index] = not blade[index]
                if blade[index]:
                    break
            yield blade

    def __iterPossibleIndiciesOfLenth(self, len):
        def indiciesLength(indicies):
            count = 0
            for i in indicies:
                if i:
                    count+=1
            return count
        for indicies in self.__iterPossibleIndicies():
            if indiciesLength(indicies)==len:
                yield indicies

    def __executeBladeScript(self, script):
        with open(script, "r") as file:
            obj = compile(file.read(), script, 'exec')
        bladesSet = []
        def hasBladesType(bladesType):
            for blades in bladesSet:
                if blades.equal(bladesType):
                    return True
            return False

        def addBladesType(bladesType):
            if not hasBladesType(bladesType):
                bladesSet.append(bladesType)

        def enableBladesTypeOfLength(len):
            for indicies in self.__iterPossibleIndiciesOfLenth(len):
                addBladesType(MultivectorType(self, indicies))

        def enableBladesType(indicies):
            addBladesType(MultivectorType(self, indicies))

        env = {"enableMultivectorTypesOfLength":enableBladesTypeOfLength,
               "enableMultivectorType":enableBladesType}
        exec(obj, env)
        addBladesType(MultivectorType(self, [True for i in range(self.bladeCount)]))
        self.multivectorTypes = [MultivectorType(self, blade) for blade in self.__iterPossibleIndicies() if hasBladesType(MultivectorType(self, blade))]
        return

    def __defaultBlades(self):
        self.multivectorTypes= [MultivectorType(self, blade) for blade in self.__iterPossibleIndicies()]
        return

    def __buildMultiply(self):
        def getElement(blade, elementList):
            elementSet = set(elementList)
            for eid, elist in enumerate(self.elements[blade]):
                if len(elementSet & set(elist))==len(elementList):
                    return eid
            raise Exception("Failed to retrieve element id.")

        def multiply(list1, list2):
            if len(list1)==0:
                return list2, 1
            if len(list2)==0:
                return list1, 1
            pos1 = 0
            pos2 = 0
            plen1 = len(list1)
            factor = 1
            result = []
            while pos1<len(list1) and pos2<len(list2):
                x1 = list1[pos1]
                x2 = list2[pos2]
                if x1==x2:
                    # This element is eliminated by scalar multiplication.
                    # The shiftFactor takes into account that we first have to move the elements next to each other
                    shiftFactor = (-1)**(plen1-pos1-1)
                    factor*=self.metric[x1][x2]*shiftFactor
                    pos1+=1
                    pos2+=1
                elif x1<x2:
                    result.append(x1)
                    pos1+=1
                elif x1>x2:
                    # The factor change is necessary since we shift the element from the second list to the
                    # beginning of the first
                    result.append(x2)
                    factor*= (-1)**(plen1-pos1)
                    pos2+=1
            result+=list1[pos1:]
            result+=list2[pos2:]
            return result, factor

        for index1 in range(self.bladeCount):
            for elementsId1 in range(self.bladeLengths[index1]):
                for index2 in range(self.bladeCount):
                    for elementsId2 in range(self.bladeLengths[index2]):
                        elements1 = self.elements[index1][elementsId1]
                        elements2 = self.elements[index2][elementsId2]
                        productElements, factor = multiply(elements1, elements2)
                        targetElementsId = getElement(len(productElements), productElements)
                        self.multiplicationMap[(index1, elementsId1, index2, elementsId2)]=(factor, len(productElements), targetElementsId)
        return

    def elementStr(self, index, element):
        return "e"+"".join(str(i+1) for i in self.elements[index][element])

    def __generateElements(self, index, start, elements):
        if index==0:
            yield elements
        else:
            for x in range(start, self.elementCount):
                yield from self.__generateElements(index-1, x+1, elements+[x])

    def iterMultivectorTypes(self):
        yield from self.multivectorTypes
