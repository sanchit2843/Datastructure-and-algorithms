a = [1]*tc
for i in range(tc):
    a = input()
    b = str(a)
    b = list(b)
    #b = b[2:]
    #size = len(b)
    #b = b[0:(size-2)]
    b = ''.join(b)
    b = b.split('.')
    b.reverse()
    b = '.'.join(b)
    print(b)
