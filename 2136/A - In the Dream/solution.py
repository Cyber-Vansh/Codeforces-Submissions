t = int(input())
for _ in range(t):
    a, b, c, d = map(int, input().split())
    
    x, y = c-a, d-b
 
    def valid(x, y):
        return max(x,y)<=2 * (min(x,y)+1)
 
    if valid(a, b) and valid(x, y):
        print("YES")
    else:
        print("NO")