t = int(input())
for _ in range(t):
    n = int(input())
 
    s = str(n)
 
    if len(s)==1:
        print(0)
    else:
        x = 0
        count = 0
        for i in range(len(s)-1,-1,-1):
            if s[i]!="0":
                x = i
                break
            count += 1
 
        for i in range(x):
            if s[i]!="0":
                count+=1
 
        print(count)