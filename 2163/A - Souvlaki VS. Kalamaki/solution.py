t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
 
    arr.sort()
 
    possible = True
 
    for i in range(1,n-1,2):
        if arr[i]!=arr[i+1]:
            possible = False
            break
    
    print("YES" if possible else "NO")