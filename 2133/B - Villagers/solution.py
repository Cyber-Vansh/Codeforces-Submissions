t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
 
    ans = 0
 
    arr.sort(reverse=True)
 
    for i in range(0,n,2):
        ans += arr[i]
 
    print(ans)