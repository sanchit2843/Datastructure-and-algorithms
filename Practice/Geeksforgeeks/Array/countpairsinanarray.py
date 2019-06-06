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

arr_sorted = list()
count_list = list()
for i in range(int(n)):
    size = len(arr[i])
    ar_sorted = list()
    count = 0
    for j in range(size):
        ar_sorted.append(j*arr[i][j])
    ar1 = np.sort(np.asarray(ar_sorted))
    ar2 = np.argsort(np.asarray(ar_sorted))
    for j in range(size):
        for k in range(j+1,size):
            if(ar1[j]<ar1[k] and ar2[j]>ar2[k]):
                count = count+1
    count_list.append(count)
for i in range(int(n)):
    print(count_list[i])
