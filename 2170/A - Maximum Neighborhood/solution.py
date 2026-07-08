t = int(input())
for _ in range(t):
    n = int(input())
 
    mat = []
    count = 1
    for i in range(n):
        curr = []
        for j in range(n):
            curr.append(count)
            count+=1
        mat.append(curr)
    
    # print(mat)
 
    ans = 0
 
    for i in range(n):
        for j in range(n):
            x = mat[i][j]
            if 0<=i-1<n:
                x+=mat[i-1][j]
            if 0<=i+1<n:
                x+=mat[i+1][j]
            if 0<=j-1<n:
                x+=mat[i][j-1]
            if 0<=j+1<n:
                x+=mat[i][j+1]
            
            ans = max(ans,x)
    
    print(ans)