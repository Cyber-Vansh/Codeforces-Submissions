t = int(input())
 
for _ in range(t):
    n = int(input())
    
    if n < 5:
        print(-1)
    else:
        evens = list(range(2, n + 1, 2))
        odds = list(range(1, n + 1, 2))
    
        for i in odds:
            Sum = evens[-1] + i
 
            count=0
 
            for j in range(2,Sum):
                if Sum%j==0:
                    count=1
            
            if count!=0:
                x = i
                odds.remove(i)
                break
 
        print(*evens,x, *odds)