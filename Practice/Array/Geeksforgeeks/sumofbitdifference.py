import numpy as np
n = input()
arr = list()
for i in range(int(n)):
    s = input()
    ar = list()
    inp=input().split()
    for j in inp:
        ar.append(int(j))
    arr.append(np.asarray(ar))

#find pairs in array
for i in range(int(n)):
    size = len(arr[i])
    count = 0
    for j in range(size):
        for k in range(j,size):
            a = int(arr[i][j]^arr[i][k])
            count = count + bin(a).count('1')
    print(2*count)
