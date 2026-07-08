t = int(input())
for _ in range(t):
    n,k = map(int,input().split())
    prices = list(map(int,input().split()))
    discounts = list(map(int,input().split()))
 
    prices.sort(reverse=True)
    discounts.sort()
 
    # print(prices)
    # print(discounts)
 
    x = 0
 
    for i in discounts:
        if x+i-1<n:
            prices[x+i-1] = 0
            x+=i
        else:
            break
    
    print(sum(prices))