import numpy as np
import heapq

n = input()
arr = list()
k = list()
for i in range(int(n)):
    s = input()
    ar = list()
    inp=input().split()
    for j in inp:
        ar.append(int(j))
    arr.append(np.asarray(ar))
    k.append(input())

for i in range(int(n)):
    ar = arr[i]
    ar = np.sort(ar)
    print(ar[int(k[i])-1])
'''
for i in range(int(n)):
    ar = list(arr[i])
    heapq.heapify(ar)
    for j in range(int(k[i])-1):
        heapq.heappop(ar)
        heapq.heapify(ar)
    print(ar[0])
'''
