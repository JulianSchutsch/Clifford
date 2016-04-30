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

class BladesType:
    def __init__(self, group, indicies, default=False):
        self.group = group
        self.fullIndicies = copy.copy(indicies)
        self.indicies = self.fullIndicies
        if default:
            return
        # Iterate over the possible indicies and find the optimal one
        minimumDistance = self.group.bladeCount+1
        minimumBlade = None
        for blade in self.group.iter():
            if self.compatibleWith(blade):
                distance = self.distanceTo(blade)
                if distance<minimumDistance:
                    minimumBlade = blade
                    minimumDistance = distance
        if not minimumBlade:
            raise Exception("There is no compatible blade available")
        self.indicies = minimumBlade.indicies
        return

    def length(self):
        count=0
        for i in self.indicies:
            if i:
                count+=1
        return count

    def distanceTo(self, other):
        distance = 0
        for i in range(self.group.bladeCount):
            if self.indicies[i]!=other.indicies[i]:
                distance+=1
        return distance

    def compatibleWith(self, other):
        for i in range(self.group.bladeCount):
            if self.indicies[i] and not other.indicies[i]:
                return False
        return True

    def equal(self, other):
        for i in range(self.group.bladeCount):
            if (self.indicies[i]!=other.indicies[i]):
                return False
        return True

    def hasBlade(self, index):
        return self.indicies[index]==True

    def __add__(self, other):
        assert(self.group==other.group)
        bladeCount = self.group.bladeCount
        # Trivial, if a target index is in either source, its active
        return BladesType(self.group, [self.indicies[index] or other.indicies[index] for index in range(bladeCount)])

    def __mul__(self, other):
        assert(self.group==other.group)

        bladeCount = self.group.bladeCount
        blade = [False for x in range(bladeCount)]

        # Return a Blades class containing all possible blade indicies of a multiplication with a target type
        # The touchMultiply provided by the Group has all the necessary information
        for aBladeIndex, a in enumerate(self.indicies):
            for bBladeIndex, b in enumerate(other.indicies):
                if a and b:
                    pairBladeIndex = (aBladeIndex, bBladeIndex)
                    if pairBladeIndex in self.group.touchMultiply:
                        for targetBladeIndex in self.group.touchMultiply[pairBladeIndex]:
                            blade[targetBladeIndex] = True

        return BladesType(self.group, blade)

    # Return a list of all blades which would be active if all blade combinations would be enabled
    def iterFull(self):
        for index, active in enumerate(self.fullIndicies):
            if active:
                yield index

    # Return a list of all "active" blades of this type
    def iterActive(self):
        for index, active in enumerate(self.indicies):
            if active:
                yield index

    # Helper which also yields the elements for each active blade
    def iterElements(self):
        for index, active in enumerate(self.indicies):
            if active:
                for pos in range(self.group.bladeLengths[index]):
                    yield index, pos

    # The name simply is a boolean (T and F) string where T is used for all active blades
    def name(self):
        return "".join(["T" if x else "F" for x in self.indicies])

    def __str__(self):
        return "Blade:"+str(self.indicies)

class BladeGroup:
    def __init__(self, elementCount, metric, bladeScript):

        self.elementCount = elementCount
        self.metric = metric
        self.bladeCount = elementCount+1
        self.elements = []
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
                    print("Has ", bladesType)
                    return True
            return False

        def addBladesType(bladesType):
            if not hasBladesType(bladesType):
                print("Add:", bladesType)
                bladesSet.append(bladesType)

        def enableBladesTypeOfLength(len):
            for indicies in self.__iterPossibleIndiciesOfLenth(len):
                addBladesType(BladesType(self, indicies, True))

        def enableBladesType(indicies):
            addBladesType(BladesType(self, indicies, True))

        env = {"enableBladesTypeOfLength":enableBladesTypeOfLength,
               "enableBladesType":enableBladesType}
        exec(obj, env)
        self.blades = [BladesType(self, blade, True) for blade in self.__iterPossibleIndicies() if hasBladesType(BladesType(self, blade, True))]
        print([str(b) for b in self.blades])
        print([str(b) for b in bladesSet])
        return

    def __defaultBlades(self):
        self.blades = [BladesType(self, blade, True) for blade in self.__iterPossibleIndicies()]
        return

    # Executed during initialization it calculates the inverse multiplication coefficients (pullingMultiply) and
    # the touched multiplication (e.g. wether or not a product of blades will produce a target blade).
    def __buildMultiply(self):

        # Calculates the element id of an elementList, which is of course specific to a blade
        # elementList must be sorted.
        def getElement(bladeIndex, elementList):
            elementSet = set(elementList)
            for eid, elist in enumerate(self.elements[index]):
                if len(elementSet & set(elist))==len(elementList):
                    return eid
            raise Exception("Failed to retrieve element id.")

        # Multiply two lists of elements and return a target element list and the factor of the multiplication
        # Input lists must be sorted, output lists are sorted.
        # The complication is from the fact, that the product of non identical elements has to account
        # for the asymmetry of the wedge product.
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

        self.pullingMultiply = {}
        self.touchMultiply = {}
        # Initialize the pullingMultiply lists
        for index in range(self.bladeCount):
            for element in range(self.bladeLengths[index]):
                self.pullingMultiply[(index, element)] = []
        for index1 in range(self.bladeCount):
            for elementsId1 in range(self.bladeLengths[index1]):
                for index2 in range(self.bladeCount):
                    for elementsId2 in range(self.bladeLengths[index2]):
                        elements1 = self.elements[index1][elementsId1]
                        elements2 = self.elements[index2][elementsId2]
                        productElements, factor = multiply(elements1, elements2)
                        if factor!=0:
                            targetBladeIndex = len(productElements)
                            targetElementsId = getElement(index, productElements)
                            self.pullingMultiply[(targetBladeIndex, targetElementsId)].append((index1, elementsId1, index2, elementsId2, factor))
                            indexpair = (index1, index2)
                            if indexpair not in self.touchMultiply:
                                self.touchMultiply[indexpair] = {}
                            self.touchMultiply[indexpair][targetBladeIndex] = True
        return

    def indexToBladesType(self, index):
        active = [False for i in range(self.bladeCount)]
        active[index]=True
        return BladesType(self, active)

    def elementStr(self, index, element):
        return "e"+"".join(str(i+1) for i in self.elements[index][element])

    def __generateElements(self, index, start, elements):
        if index==0:
            yield elements
        else:
            for x in range(start, self.elementCount):
                yield from self.__generateElements(index-1, x+1, elements+[x])

    # Iterate over all possible BladesTypes
    def iter(self):
        yield from self.blades