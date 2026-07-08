t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    S = sum(arr)
    odd_count = sum(1 for x in arr if x%2)
    if odd_count == 0 or odd_count == n:
        print(max(arr))
    else:
        print(S - (odd_count - 1))