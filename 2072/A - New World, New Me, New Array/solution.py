t = int(input())
for _ in range(t):
    n,k,p = map(int,input().split())
 
    if abs(k)%p==0:
        x = abs(k)//p
    else:
        x = abs(k)//p + 1
    
    if x>n:
        print(-1)
    else:
        print(x)