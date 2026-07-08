t = int(input())
for i in range(t):
    a,b = map(int,input().split())
    c = b-a
    c = c//2
    c = a+c
    result = (c-a)+(b-c)
    print(result)