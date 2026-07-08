import sys
sys.setrecursionlimit(10**6)
 
t = int(input())
for _ in range(t):
    n = int(input())
    a = input()
    b = input()
 
    a += "  "
    b += "  "
 
    dp = {}
 
    def code(i,curr_a,curr_b):
        if i>=n:
            return 0
        
        if i in dp:
            return dp[i]
        
        if curr_a==curr_b:
            dp[i] = code(i+1,a[i+1],b[i+1])
        elif curr_a==a[i+1]:
            if curr_b==b[i+1]:
                dp[i] = code(i+2,a[i+2],b[i+2])
            else:
                dp[i] = 1 + code(i+2,a[i+2],b[i+2])
        else:
            c1 = 1 + code(i+1,a[i+1],b[i+1])
            if curr_b==b[i+1]:
                c2 = 1 + code(i+2,a[i+2],b[i+2])
            else:
                c2 = 2 + code(i+2,a[i+2],b[i+2])
            
            dp[i] = min(c1,c2)
        
        return dp[i]
    
    print(code(0,a[0],b[0]))