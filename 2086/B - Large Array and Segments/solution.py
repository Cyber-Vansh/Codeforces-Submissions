t = int(input())  
for _ in range(t):  
    n, k, x = map(int, input().split())  
    a = list(map(int, input().split()))  
 
    total = sum(a)  
    prefix = [0] * (n + 1)  
 
    for i in range(n):  
        prefix[i + 1] = prefix[i] + a[i]  
 
    count = 0  
 
    for i in range(n):  
        remaining = prefix[n] - prefix[i]  
 
        if remaining >= x:  
            count += k  
        else:  
            need = x - remaining  
            cycles = (need + total - 1) // total  
 
            if cycles < k:  
                count += (k - cycles)  
 
    print(count)