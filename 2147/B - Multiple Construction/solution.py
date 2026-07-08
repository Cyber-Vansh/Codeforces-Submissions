t = int(input())
 
for _ in range(t):
 
    n = int(input())
 
    if n % 2 == 0:
 
        odd = n - 1
 
        even = []
        for x in range(n, 1, -2):
            even.append(x)
 
        base = []
        base.extend(even)
        base.append(1)
        base.extend(reversed(even))
 
        for _dummy in range(n - 1):
            base += [1]
 
        idx = 0
        while idx < len(base):
 
            if odd == 1:
                break
 
            if base[idx] == 1:
                base[idx] = odd
                base[idx + odd] = odd
                odd -= 2
 
            idx += 1
 
        print(*base)
 
    else:
 
        odd = n
 
        even = []
        for x in range(n - 1, 1, -2):
            even.append(x)
 
        base = []
        base.extend(even)
        base.append(1)
        base.extend(even[::-1])
 
        for _dummy in range(n):
            base += [1]
 
        idx = 0
        while idx < len(base):
 
            if odd == 1:
                break
 
            if base[idx] == 1:
                base[idx] = odd
                base[idx + odd] = odd
                odd -= 2
 
            idx += 1
 
        print(*base)