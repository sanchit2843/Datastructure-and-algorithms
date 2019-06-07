a = [1]*tc
for i in range(tc):
    a[i] = input()
    flag1 = 0
    flag2 = 0
    flag3 = 0
    b = list(a[i])
    size = len(b)
    #print(size)
    for j in range(size):
        if(b[j] == '{'):
            flag1 = flag1+1
        if(b[j] == '['):
            flag2 = flag2+1
        if(b[j] == '('):
            flag3 = flag3+1
        if(b[j] == '}'):
            flag1 = flag1-1
        if(b[j] == ']'):
            flag2 = flag2-1
        if(b[j] == ')'):
            flag3 = flag3-1
    if(flag1 == 0 and flag2 == 0 and flag3==0):
        print('balanced')
    else:
        print('not balanced')
