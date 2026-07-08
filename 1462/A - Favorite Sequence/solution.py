t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int,input().split()))
 
    ans = []
 
    if n%2==0:
        for i in range(n//2):
            ans.append(l[i])
            ans.append(l[-i-1])
    else:
        for i in range(n//2+1):
            if i==n//2:
                ans.append(l[i])
            else:
                ans.append(l[i])
                ans.append(l[-i-1])
 
    print(*ans)