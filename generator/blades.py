import math

class Blade:
    def __init__(self, group, indicies):
        self.group = group
        self.indicies = indicies

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
        return Blade(self.group, [self.indicies[index] or other.indicies[index] for index in range(bladeCount)])

    def __mul__(self, other):
        assert(self.group==other.group)
        bladeCount = self.group.bladeCount
        blade = [False for x in range(bladeCount)]
        for aPos, a in enumerate(self.indicies):
            for bPos, b in enumerate(other.indicies):
                if a and b:
                    pair = (aPos, bPos)
                    if pair in self.group.touchMultiply:
                        for targetIndex in self.group.touchMultiply[pair]:
                            blade[targetIndex] = True
        return Blade(self.group, blade)

    def iter(self):
        yield from self.indicies

    def iterActive(self):
        for index, active in enumerate(self.indicies):
            if active:
                yield index

    def iterElements(self):
        for index, active in enumerate(self.indicies):
            if active:
                for pos in range(self.group.bladeLengths[index]):
                    yield index, pos

    def name(self):
        return "".join(["T" if x else "F" for x in self.indicies])

    def __str__(self):
        return "Blade:"+str(self.indicies)

class BladeGroup:
    def __init__(self, elementCount, metric):
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
                    factor*=self.metric[x1][x2]*(-1)**(plen1-pos1-1)
                    pos1+=1
                    pos2+=1
                elif x1<x2:
                    result.append(x1)
                    pos1+=1
                elif x1>x2:
                    result.append(x2)
                    factor = (-1)**(plen1-pos1)
                    pos2+=1
            result+=list1[pos1:]
            result+=list2[pos2:]
            return result, factor
        def getElement(index, list):
            listSet = set(list)
            for eid, elist in enumerate(self.elements[index]):
                if len(listSet & set(elist))==len(list):
                    return eid
            raise Exception("Failed to retrieve element id.")

        self.elementCount = elementCount
        self.metric = metric
        self.bladeCount = elementCount+1
        self.elements = []
        self.bladeLengths = []
        for index in range(self.bladeCount):
            l=[e for e in self.__generateElements(index, 0, [])]
            self.bladeLengths.append(len(l))
            self.elements.append(l)
        self.pullingMultiply = {}
        self.touchMultiply = {}
        for index in range(self.bladeCount):
            for element in range(self.bladeLengths[index]):
                self.pullingMultiply[(index, element)] = []
        for index1 in range(self.bladeCount):
            for element1 in range(self.bladeLengths[index1]):
                for index2 in range(self.bladeCount):
                    for element2 in range(self.bladeLengths[index2]):
                        list1 = self.elements[index1][element1]
                        list2 = self.elements[index2][element2]
                        listr, factor = multiply(list1, list2)
                        index = len(listr)
                        element = getElement(index, listr)
                        if factor!=0:
                            self.pullingMultiply[(index, element)].append((index1, element1, index2, element2, factor))
                            indexpair = (index1, index2)
                            if indexpair not in self.touchMultiply:
                                self.touchMultiply[indexpair] = {}
                            self.touchMultiply[indexpair][index]=True

        return

    def elementStr(self, index, element):
        return "e"+"".join(str(i+1) for i in self.elements[index][element])

    def __generateElements(self, index, start, elements):
        if index==0:
            yield elements
        else:
            for x in range(start, self.elementCount):
                yield from self.__generateElements(index-1, x+1, elements+[x])

    def iter(self):
        blade = [False for x in range(self.bladeCount)]
        for i in range(2**self.bladeCount-1):
            for index in range(self.bladeCount):
                blade[index] = not blade[index]
                if blade[index]:
                    break
            yield Blade(self, blade)