t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
 
    x = 0
    y = n-1
 
    possible = True
 
    for i in range(n):
        if not possible:
            break
 
        a = y-x
 
        for j in range(x,y+1):
            arr[j]-=1
 
        for j in range(x,y+1):
            if arr[j]!=0:
                x = j
                break
        for j in range(y,x-1,-1):
            if arr[j]!=0:
                y = j
                break
        
        for j in range(x,y+1):
            if arr[j]==0:
                possible = False
                break
        
        if y-x+1!=a:
            possible = False
            break
    
    if sum(arr)==0:
        possible = True
    
    print("Yes" if possible else "No")
    