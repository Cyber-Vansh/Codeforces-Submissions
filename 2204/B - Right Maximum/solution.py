t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int,input().split()))
 
    Max = 0
    count = 0
 
    for i in a:
        if i>=Max:
            count += 1
            Max = i
 
    print(count)