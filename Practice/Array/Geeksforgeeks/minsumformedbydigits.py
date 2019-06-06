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

for i in range(int(n)):
    ar = np.sort(np.asarray(arr[i]))
    le = list()
    lo = list()
    for j in range(len(ar)):
        if(j%2==0):
            le.append(str(ar[j]))
        else:
            lo.append(str(ar[j]))
    le = int(''.join(le))
    lo = int(''.join(lo))
    print(lo+le)
