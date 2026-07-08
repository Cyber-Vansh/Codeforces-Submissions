import sys
sys.setrecursionlimit(10**8)
 
t = int(input())
for _ in range(t):
    n = int(input())
 
    tree = [[] for i in range(n+1)]
    for i in range(n-1):
        u,v = map(int,input().split())
 
        tree[u].append(v)
        tree[v].append(u)
    
    leafs = [0]*(n+1)
    visited = [0]*(n+1)
 
    def code(curr):
        visited[curr] = 1
 
        flag = False
        for node in tree[curr]:
            if visited[node]==0:
                flag = True
 
                leafs[curr] += code(node)
        
        if not flag:
            leafs[curr] = 1
            return 1
 
        return leafs[curr]
 
    code(1)
 
    q = int(input())
    for i in range(q):
        x,y = map(int,input().split())
 
        print(leafs[x]*leafs[y])
 
 
 