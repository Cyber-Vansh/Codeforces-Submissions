t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
 
    a = s.count("-")
    b = s.count("_")
 
    if a%2==0:
        print((a//2)*b*(a//2))
    else:
        print((a//2)*b*(a//2+1))