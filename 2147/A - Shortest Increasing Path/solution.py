t = int(input())
for _ in range(t):
    x,y = map(int,input().split())
 
    if y==x:
        print(-1)
    elif y>x:
        print(2)
    else:
        if x-1==y or y==1:
            print(-1)
        else:
            print(3)