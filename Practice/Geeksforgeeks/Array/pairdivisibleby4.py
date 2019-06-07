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

for s in range(int(n)):
    a = arr[s]
    even = list()
    odd = list()
    for i in range(len(a)):
        if(a[i]%2==0):
            even.append(a[i])
        else:
            odd.append(a[i])
    count = 0
    for i in [even,odd]:
        for j in range(len(i)):
            for k in range(j+1,len(i)):
                sum = i[j]+i[k]
                if(sum%4==0):
                    count = count+1
    print(count)
