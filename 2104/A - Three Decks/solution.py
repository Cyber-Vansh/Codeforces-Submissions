t = int(input())
for _ in range(t):
    a,b,c = map(int,input().split())
 
    c-=b-a
    a+= b-a
 
    if c<a or c<b:
        print("No")
    else:
        if (c-b)%3==0:
            print("Yes")
        else:
            print("No")