t = int(input())
for _ in range(t):
    a,b = map(int,input().split())
 
    if b==1:
        if a%2==0:
            print(-1)
        else:
            print(a+b)
    elif b%2==1:
        if a%2==1:
            print(a*b+1)
        else:
            print(-1)
    else:
        if a%2==1 and (b//2)%2==1:
            print(-1)
        else:
            print(a*(b//2)+2)
 