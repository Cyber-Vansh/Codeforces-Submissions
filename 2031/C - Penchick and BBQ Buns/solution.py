t = int(input())
for _ in range(t):
    n = int(input())
 
    if n%2==1 and n<27:
        print(-1)
    elif n%2==0:
        for i in range(1,(n//2)+1):
            print(i,end=" ")
            print(i,end=" ")
        print()
    elif n>=27:
        print("1 2 2 3 3 4 4 5 5 1 6 6 7 7 8 8 9 9 10 10 11 11 12 13 13 1 12",end=" ")
        m=14
        for i in range((n-27)//2):
            print(m,end=" ")
            print(m,end=" ")
            m+=1
            