t = int(input())
for _ in range(t):
    n,m = map(int,input().split())
    arr = list(map(int,input().split()))
 
    arr.sort()
 
    ans = 0
 
    for i in range(n-1,-1,-1):
        ans += arr[i]*m
        m-=1
        if m==0:
            break
 
    print(ans)