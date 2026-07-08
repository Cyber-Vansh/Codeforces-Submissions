t = int(input())
for _ in range(t):
    n,k = map(int,input().split())
    s = input()
 
    x = 0
 
    possible = True
 
    for i in range(len(s)):
        if s[i]=="1":
            x+=1
        else:
            x=0
        
        if x>=k:
            print("NO")
            possible = False
            break
    
    if possible:
        x = 1
        y = sum(int(s[i]) for i in range(len(s)))+1
 
        p = []
 
        for i in range(len(s)):
            if s[i]=="1":
                p.append(x)
                x+=1
            else:
                p.append(y)
                y+=1
        print("YES")
        print(*p)