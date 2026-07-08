t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
 
    pre = [0]*(n+1)
    for i in range(n):
        pre[i+1] = pre[i]+arr[i]
 
    possible = False
    l = r = 0
    for i in range(1, n-1):
        for j in range(i+1, n):
            s1 = pre[i]%3
            s2 = (pre[j]-pre[i])%3
            s3 = (pre[n]-pre[j])%3
            if s1==s2==s3 or sum([s1,s2,s3])==3:
                l,r = i,j
                possible = True
                break
        if possible:
            break
 
    if possible:
        print(l,r)
    else:
        print(0,0)