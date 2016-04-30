import argparse

class Arguments:
    pass

class FailedParse(Exception):
    def __init__(self, reason):
        self.reason = reason

    def __str__(self):
        return self.reason

def parseArguments():
    parser = argparse.ArgumentParser(description='Generate code for clifford algebras.')

    parser.add_argument('elements', type=int, nargs=1, help='Number of basis elements')
    parser.add_argument('--metric', type=str, nargs=1, help='Metric, format [a11 a12..., a21 a22..., ...]')
    parser.add_argument('--bladescript', type=str, nargs=1, help='Script to describe the blades to be generated')
    parser.add_argument('--cpp', action='store_true', help='Generate C++ files')
    parser.add_argument('--cpp_header', type=str, nargs=1, help="C++ header file name")
    parser.add_argument('--cpp_type', type=str, nargs=1, help="C++ basis type")
    parser.add_argument('--cpp_namespace', type=str, nargs=1, help="C++ namespace")

    args = parser.parse_args()

    elementCount = args.elements[0]
    if elementCount<1:
        raise FailedParse("Number of elements must be greater 0")
    try:
        metric = None
        if args.metric:
            metric=eval(args.metric[0])
    except SyntaxError as e:
        raise FailedParse("Invalid metric format.") from e;
    except NameError as e:
        raise FailedParse("Metric is refering to unknown variable") from e
    error = "Metric must be a quadratic matrix of rank number of elements"
    if not metric:
        metric = []
        for i in range(elementCount):
            metric.append([(1 if i==n else 0) for n in range(elementCount)])
    if len(metric)!=elementCount:
        raise FailedParse("Invalid row count in metric")
    for rowC, row in enumerate(metric):
        if len(row)!=elementCount:
            raise FailedParse("Invalid colum count in metric row "+str(rowC))
        for colC, col in enumerate(row):
            if type(col)=='int' or type(col)=='float':
                raise FailedParse("Invalid data type in row "+str(rowC)+" and column "+str(colC))

    settings = Arguments()
    settings.elementCount = elementCount
    settings.metric = metric
    settings.generate_cpp = args.cpp
    settings.bladeScript = args.bladescript[0] if args.bladescript else None
    settings.cpp_header = args.cpp_header[0]
    settings.cpp_type = args.cpp_type[0]
    if not settings.cpp_type:
        settings.cpp_type = "double"
    settings.cpp_namespace = args.cpp_namespace[0]
    return settings
