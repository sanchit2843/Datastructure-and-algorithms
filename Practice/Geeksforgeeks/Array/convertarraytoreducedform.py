#code
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
    a = arr[i]
    a_sorted = np.reshape(np.sort(a),(len(a),1))
    a_argsorted = np.reshape(np.argsort(a),(len(a),1))

    for j in range(len(a)):
        a_sorted[j] = j
    b = np.concatenate((a_sorted,a_argsorted),axis = 1)
    b = b[b[:,1].argsort()]
    for j in range(len(a)):
        print(b[j][0],end = " ")
    print('')
