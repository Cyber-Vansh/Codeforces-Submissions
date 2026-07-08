t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
 
    suff = [arr[-1]]
    for i in range(n-2,-1,-1):
        suff.append(suff[-1]+arr[i])
    suff.reverse()
 
    max_arr = []
    Max = arr[0]
    for i in range(n):
        if arr[i]>Max:
            Max = arr[i]
        max_arr.append(Max)
 
    for i in range(n):
        x = max_arr[n-i-1] + (suff[n-i] if n-i!=n else 0)
        print(x,end=" ")
    print()