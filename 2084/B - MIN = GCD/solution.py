def gcd(a, b):
    while b:
        a, b = b, a % b
    return a
 
def myCode(l):
    first = l[0]
    for j in l[1:]:
        first = gcd(first, j)
    return first
 
t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int,input().split()))
 
    Min = min(a)
    l=[]
 
    if a.count(Min)>1:
        print("Yes")
    else:
        for i in range(n):
            if a[i]%Min==0 and a[i]!=Min:
                l.append(a[i])
 
        if len(l)>0:
            l = [x//Min for x in l]
            if myCode(l)==1:
                print("Yes")
            else:
                print("No")
        else:
            print("No")