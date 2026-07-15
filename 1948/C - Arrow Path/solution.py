import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**8)
 
t = int(input())
for _ in range(t):
    n = int(input())
 
    grid = []
    grid.append(list(input()))
    grid.append(list(input()))
 
    dp = [[-1 for i in range(n)] for j in range(2)]
    
    def code(i,j):
        if j==n-1:
            if i==0 and grid[i][j]=="<":
                return False
            return True
        
        # if grid[i][j]=="<":
        #     return False
        
        if dp[i][j]!=-1:
            return dp[i][j]
        
        ans = False
 
        if grid[i][j+1]==">":
            ans = ans or code(i,j+2)
        if i+1<2 and grid[i+1][j]==">":
            ans = ans or code(i+1,j+1)
        if i-1>=0 and grid[i-1][j]==">":
            ans = ans or code(i-1,j+1)
 
        dp[i][j] = ans
        return ans
    
    if code(0,0):
        print("YES")
    else:
        print("NO")
        
        
 
 
 
        