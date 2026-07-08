def getNumber(n, r, c):
    if n == 1:
        if (r, c) == (1, 1): return 1
        if (r, c) == (2, 2): return 2
        if (r, c) == (2, 1): return 3
        return 4
    h = 1 << (n - 1)
    q = h * h
    if r <= h and c <= h:
        return getNumber(n - 1, r, c)
    elif r > h and c > h:
        return q + getNumber(n - 1, r - h, c - h)
    elif r > h:
        return 2 * q + getNumber(n - 1, r - h, c)
    else:
        return 3 * q + getNumber(n - 1, r, c - h)
 
def getCoordinates(n, d):
    if n == 1:
        if d == 1: return (1, 1)
        if d == 2: return (2, 2)
        if d == 3: return (2, 1)
        return (1, 2)
    h = 1 << (n - 1)
    q = h * h
    if d <= q:
        return getCoordinates(n - 1, d)
    elif d <= 2 * q:
        r, c = getCoordinates(n - 1, d - q)
        return (r + h, c + h)
    elif d <= 3 * q:
        r, c = getCoordinates(n - 1, d - 2 * q)
        return (r + h, c)
    else:
        r, c = getCoordinates(n - 1, d - 3 * q)
        return (r, c + h)
 
T = int(input())
for _ in range(T):
    n = int(input())
    q = int(input())
    for _ in range(q):
        parts = input().split()
        if parts[0] == "->":
            r, c = int(parts[1]), int(parts[2])
            print(getNumber(n, r, c))
        else:
            d = int(parts[1])
            r, c = getCoordinates(n, d)
            print(r, c)