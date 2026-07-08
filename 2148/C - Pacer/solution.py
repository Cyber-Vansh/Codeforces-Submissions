t = int(input())
for _ in range(t):
    n,m = map(int,input().split())
 
    ans = 0
    curr = 0
    time = 0
 
    for i in range(n):
        a,b = map(int,input().split())
 
        x = a-time
 
        if curr == b:
            if x%2==0:
                ans += x
            else:
                ans += x-1
        else:
            if x%2==0:
                ans += x-1
            else:
                ans += x
        curr = b
        time = a
    ans += m-time
    print(ans)