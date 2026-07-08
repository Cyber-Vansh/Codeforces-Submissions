t = int(input())
 
for _ in range(t):
    arr = list(map(int,input().split()))
 
    c = arr[0] + arr[1]
    arr.insert(2,c)
 
    count = 0
    for i in range(3):
        if arr[i+2] == arr[i] + arr[i+1]:
            count+=1
 
    x = count
    count = 0
 
    arr[2] = arr[4] - arr[3]
 
    for i in range(3):
        if arr[i+2] == arr[i] + arr[i+1]:
            count+=1
 
    print(max(x,count))