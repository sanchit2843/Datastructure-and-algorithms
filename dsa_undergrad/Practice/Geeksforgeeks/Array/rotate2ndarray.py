import numpy as np
import math
n = input()
arr = list()
for i in range(int(n)):
    s = input()
    ar = list()
    inp=input().split()
    for j in inp:
        ar.append(int(j))
    arr.append(np.asarray(ar))
def swap(a,b):
    a = a+b
    b = a-b
    a = a-b
    return a,b
for j in range(int(n)):
    size = int(math.sqrt(len(arr[j])))
    c =  arr[j].copy()
    c = np.reshape(c,(size,size)).T
    for i in range(size):
        for j in range(int(size/2)):
            c[i][j],c[i][size-j-1] = swap(c[i][j],c[i][size-j-1])

    c = np.reshape(c,(1,size*size))
    for i in range(size*size):
        print(c[0][i], end =" ")
    print('')
