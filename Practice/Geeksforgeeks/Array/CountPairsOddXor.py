#input
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

#iterate over array
for i in arr:
    size = len(i)
    count = 0
    odd = 0
    even = 0
    #XOR of odd and even is odd
    for j in range(size):
        if(i[j]%2!=0):
            odd = odd+1
        else:
            even =  even+1
    print(odd*even)
