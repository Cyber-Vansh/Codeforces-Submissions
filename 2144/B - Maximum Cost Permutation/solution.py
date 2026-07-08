t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
 
    x = arr.count(0)
    
    if x==1:
        toPut = (n*(n+1)//2) - sum(arr)
 
        for i in range(n):
            if arr[i]==0:
                arr[i]=toPut
                break
    
    l,r = n-1,n-1
 
 
    for i in range(n):
        if arr[i]==i+1:
            continue
        else:
            l=i-1
            break
    for i in range(n-1,-1,-1):
        if arr[i]==i+1:
            continue
        else:
            r=i
            break
    print(r-l)