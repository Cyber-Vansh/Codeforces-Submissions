t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
 
    curr = 0
    ans = float('inf')
 
    pos = []
 
    for i in range(n):
        if s[i]=="0":
            curr+=1
        else:
            pos.append(i)
            if curr>0:
                ans = min(curr,ans)
                curr = 0
 
    if curr > 0:
        ans = min(curr, ans)
    
    if ans == 1:
        print("No")
    else:
        print("Yes")
        p = [0]*n
        x = 0
 
        pos.append(n)
 
        # print(pos)
        
        for i in range(n):
            if s[i]=="1":
                p[i] = i+1
                x+=1
            else:
                p[i] = pos[x]
                pos[x] -= 1
            # print(pos,i,p,x)
 
        print(*p)