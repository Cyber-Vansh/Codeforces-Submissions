t = int(input())
for _ in range(t):
    n = int(input())
    p = list(map(int,input().split()))
    arr = p.copy()
 
    arr.sort(reverse=True)
 
    ans = []
 
    for i in p:
        ans.append(arr[i-1])
    print(*ans)