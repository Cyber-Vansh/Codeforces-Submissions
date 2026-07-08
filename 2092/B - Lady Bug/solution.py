t = int(input())
for _ in range(t):
    n = int(input())
    a = input().strip()
    b = input().strip()
 
    X = 0
    Y = 0
 
    for i in range(1, n, 2):
        if a[i] == "1":
            X += 1
 
    for i in range(0, n, 2):
        if b[i] == "1":
            X += 1
 
    for i in range(0, n, 2):
        if a[i] == "1":
            Y += 1
 
    for i in range(1, n, 2):
        if b[i] == "1":
            Y += 1
 
    max_odd = (n + 1) // 2
    max_even = n // 2
 
    if X <= max_odd and Y <= max_even:
        print("YES")
    else:
        print("NO")