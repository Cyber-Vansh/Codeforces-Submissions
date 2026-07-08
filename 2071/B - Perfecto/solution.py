t = int(input())
 
for _ in range(t):
    n = int(input())
 
    if (n == 1) or (((n * (n + 1)) // 2) ** 0.5).is_integer():
        print(-1)
    else:
        ans = [i for i in range(2,n+1,2)]
        left = []
        current = sum(ans)
 
        n = n if n%2==1 else n-1
 
        for i in range(n,0,-2):
            if (current+i)**0.5 != int((current+i)**0.5):
                ans.append(i)
                current+=i
            else:
                left.append(i)
 
        ans.extend(left)
        print(*ans)