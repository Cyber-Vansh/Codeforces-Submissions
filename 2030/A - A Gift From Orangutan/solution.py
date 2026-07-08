t = int(input())
 
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    
    score = 0
    
    for i in range(1, n):
        score += a[n-1] - a[0]
 
    print(score)