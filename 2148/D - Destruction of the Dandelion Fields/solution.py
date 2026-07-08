t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
 
    evens = []
    odds = []
 
    for i in arr:
        if i%2==0:
            evens.append(i)
        else:
            odds.append(i)
    
    odds.sort()
 
    if len(odds)==0:
        print(0)
    else:
        print(sum(evens)+sum(odds[len(odds)//2:]))