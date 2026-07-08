t = int(input())
for _ in range(t):
    n=int(input())
    p = list(map(int,input().split()))
 
    for i in range(1,len(p)):
        if (p[i]-p[i-1]) == -1:
            p[i-1],p[i] = p[i],p[i-1]
            if i<0:
                i-=1
 
    ans="YES"
    
    for i in range(len(p) - 1):
        if p[i] > p[i + 1]:
            ans="NO"
 
    print(ans)