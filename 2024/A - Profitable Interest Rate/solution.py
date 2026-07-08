t = int(input())
 
for i in range(t):
    a,b = map(int,input().split())
 
    if a>=b:
        print(a)
    else:
        c = b-a
        if a-c<=0:
            print(0)
        else:
            b = b-2*c
            a = a-c
 
            print(b)