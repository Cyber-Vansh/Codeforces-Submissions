t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
    d = {}
 
    for i in arr:
        d[i] = d.get(i,0) + 1
 
    freq = sorted(d.values(),reverse=True)
 
    ans = 0
    m = 1
 
    for i in freq:
        if i*m > ans:
            ans = i*m
        m += 1
 
    print(ans)