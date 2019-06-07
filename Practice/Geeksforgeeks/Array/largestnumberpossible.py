n = input()
arr = list()
for i in range(int(n)):
    inp=input().split()
    arr.append(inp)
ar = list()
for i in range(int(n)):
    a = int(arr[i][0])
    s = int(arr[i][1])
    ar1 = list()
    for j in range(int(a)):
        if(s<=9 and s>0):
            ar1.append(str(s))
            s = 0
            continue
        if(s==0):
            ar1.append('0')
        if(s>9):
            ar1.append('9')
            s = s-9
    ar1 = int(''.join(ar1))
    if(s==0 and ar1>0):
        print(ar1)
    else:
        print('-1')
