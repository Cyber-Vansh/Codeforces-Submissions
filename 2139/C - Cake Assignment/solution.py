t = int(input())
for _ in range(t):
    k,x = map(int,input().split())
 
    o = 2**k
 
    a,b = x,o+o-x
 
    ans = []
 
    while True:
        if a==o:
            break
        elif a>o:
            ans.append(2)
            b*=2
            a = o+o-b
        else:
            ans.append(1)
            a*=2
            b = o+o-a
    ans.reverse()
    print(len(ans))
    if len(ans)>0:
        print(*ans)