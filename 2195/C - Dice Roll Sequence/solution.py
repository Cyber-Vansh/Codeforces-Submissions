import sys
sys.setrecursionlimit(10**6)
 
t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
 
    dp = {}
 
    def code(i,op):
        if i==n:
            return 0
 
        if i>0:
            prev = arr[i-1]
        else:
            prev = -1
 
        if (i,op,prev) in dp:
            return dp[(i,op,prev)]
 
        ans = 10**9
 
        if op:
            old = arr[i]
            arr[i] = 10
            ans = 1 + code(i+1,False)
            arr[i] = old
 
        else:
            if i>0 and (arr[i-1]==arr[i] or arr[i-1]==7-arr[i]):
                old = arr[i]
                arr[i] = 10
                ans = 1 + code(i+1,False)
                arr[i] = old
            elif i+1<n and (arr[i]==arr[i+1] or 7-arr[i]==arr[i+1]):
                a = code(i+1,True)
 
                old = arr[i]
                arr[i] = 10
                b = 1 + code(i+1,False)
                arr[i] = old
 
                ans = min(a,b)
            else:
                ans = code(i+1,False)
 
        dp[(i,op,prev)] = ans
        return ans
 
    print(code(0, False))