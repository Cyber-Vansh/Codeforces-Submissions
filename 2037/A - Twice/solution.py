t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int,input().split()))
 
    b = []
    count=0
 
    for i in a:
        if i not in b:
            count += (a.count(i)) // 2
            b.append(i)
        
    print(count)