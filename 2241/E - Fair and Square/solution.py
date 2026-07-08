import sys
sys.setrecursionlimit(10**8)
 
t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
 
    adj = [[] for _ in range(n+1)]
 
    for _ in range(n-1):
        u,v = map(int,input().split())
        adj[u].append(v)
        adj[v].append(u)
 
    parent = [0]*(n+1)
    sub = [0]*(n+1)
 
    def dfs(u,p):
        parent[u] = p
        sub[u] = 1
 
        for v in adj[u]:
            if v==p:
                continue
 
            dfs(v,u)
 
            sub[u] += sub[v]
 
    dfs(1,0)
 
    final = [[] for _ in range(n+1)]
 
    for u in range(1,n+1):
        for v in adj[u]:
            if parent[u]==v:
                count = n-sub[u]
            else:
                count = sub[v]
 
            final[u].append(count)
    
    # print(final)
    # print(arr)
 
    ans = 0
 
    for i in range(1,n+1):
        if (arr[i-1]**0.5)!=int(arr[i-1]**0.5) or len(final[i])<2:
            continue
 
        l = len(final[i])
 
        prefix = final[i].copy()
        dp = [0]*l
 
        for j in range(l-2,-1,-1):
            prefix[j] += prefix[j+1]
 
        for j in range(l-1):
            ans += final[i][j]*prefix[j+1]
 
        prefix = final[i].copy()
 
        for j in range(l-2,-1,-1):
            prefix[j] += prefix[j+1]
 
        curr = 0
 
        for j in range(l):
            prefix[j] -= final[i][j]
 
            ans += curr*final[i][j]*prefix[j]
 
            curr += final[i][j]
    
    print(ans)
        
        
 
 
 