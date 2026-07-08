def can(x, arr, k):
    if x == 0:
        return True
    seg = 0
    cnt = 0
    seen = [False] * x
    for a in arr:
        if a < x and not seen[a]:
            seen[a] = True
            cnt += 1
        if cnt == x:
            seg += 1
            if seg == k:
                return True
            seen = [False] * x
            cnt = 0
    return False
 
t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    low, high = 0, n + 1
    ans = 0
    while low <= high:
        mid = (low + high) // 2
        if can(mid, arr, k):
            ans = mid
            low = mid + 1
        else:
            high = mid - 1
    print(ans)