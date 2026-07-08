t = int(input())
for _ in range(t):
    n = int(input())
 
    if n%2==0:
        print(-1)
    else:
        ans = [n] + [i for i in range(1,n)]
        print(*ans)