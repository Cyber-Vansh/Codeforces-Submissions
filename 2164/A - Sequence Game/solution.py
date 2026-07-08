t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
    x = int(input())
 
    if n==1:
        if arr[0]==x:
            print("YES")
        else:
            print("NO")
    elif min(arr)<=x<=max(arr):
        print("YES")
    else:
        print("NO")