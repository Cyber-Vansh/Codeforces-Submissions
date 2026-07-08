import sys
sys.setrecursionlimit(10**8)
 
t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
 
    tree = [[0,0] for i in range(n+1)]
 
    for i in range(1,n+1):
        a,b = map(int,input().split())
        tree[i][0] = a
        tree[i][1] = b
    
    # print(tree)
    
    def code(curr):
        if tree[curr][0]==0 and tree[curr][1]==0:
            return 0
 
        ans = float('inf')
        
        if tree[curr][0]!=0:
            if s[curr-1]=="L":
                ans = min(ans,code(tree[curr][0]))
            else:
                ans = min(ans,1+code(tree[curr][0]))
        
        if tree[curr][1]!=0:
            if s[curr-1]=="R":
                ans = min(ans,code(tree[curr][1]))
            else:
                ans = min(ans,1+code(tree[curr][1]))
        
        return ans
    
    print(code(1))
 
 
 