t = int(input())
for _ in range(t):
    n,size = map(int,input().split())
 
    ans = 0
 
    for i in range(n):
        x,y = map(int,input().split())
 
        if i == 0:
            a,b = x,y
        else:
            x,y = x+a,y+b
            ans += ((x-a)+(y-b))*2  
            a,b = x,y
    
    print(ans+(size*4))