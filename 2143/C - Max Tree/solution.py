from collections import deque
 
t = int(input())
for _ in range(t):
    n = int(input())
 
    arr = []
 
    for i in range(n-1):
        u,v,x,y = map(int,input().split())
        arr.append([u,v] if x>=y else [v,u])
    
    queue = deque([])
 
    d = [0]*(n+1)
 
    for i,j in arr:
        if d[i]==0:
            queue.appendleft(i)
            d[i]=1
        if d[j]==0:
            queue.append(j)
            d[j]=1
 
    p = [0]*n
    curr = n
 
    for i in queue:
        p[i-1]=curr
        curr-=1
    
    print(*p)
    