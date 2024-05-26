import numpy as np
n = input()
arr = list()
for i in range(int(n)):
    ar = list()
    inp=input().split()
    for j in inp:
        ar.append(int(j))
    arr.append(np.asarray(ar))

def factorial(n):
    if(n==0):
        return 1
    return n*factorial(n-1)
for i in range(int(n)):
    ar = arr[i]
    a = int(ar[0])
    b = int(ar[1])
    count = factorial(a+b)/(factorial(a)*factorial(b))
    print(int(count))


        
