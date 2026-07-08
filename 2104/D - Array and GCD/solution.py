MAX_N = 4 * 10**5
M     = 6_000_000
 
is_prime = [True] * (M + 1)
is_prime[0] = is_prime[1] = False
 
primes = []
for i in range(2, M + 1):
    if is_prime[i]:
        primes.append(i)
        if len(primes) >= MAX_N:
            break
        start = i * i
        step  = i
        end   = M + 1
        count = ((end - start - 1) // step) + 1
        is_prime[start:end:step] = [False] * count
 
P = [0] * (len(primes) + 1)
for i in range(1, len(primes) + 1):
    P[i] = P[i - 1] + primes[i - 1]
 
t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort(reverse=True)
 
    S = [0] * (n + 1)
    for i in range(1, n + 1):
        S[i] = S[i - 1] + a[i - 1]
 
    k_max = 0
    for k in range(1, n + 1):
        if k >= len(P):
            break
        if S[k] >= P[k]:
            k_max = k
        else:
            break
 
    print(n - k_max)