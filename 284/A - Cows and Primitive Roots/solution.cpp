#include <bits/stdc++.h>
using namespace std;
 
long long modpow(long long a, long long b, long long mod) {
    long long res = 1;
    while (b) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
 
int main() {
    long long p;
    cin >> p;
 
    int cnt = 0;
 
    for (long long i = 1; i < p; i++) {
        bool check = true;
 
        for (long long j = 1; j < p - 1; j++) {
            if ((modpow(i, j, p) - 1) % p == 0) {
                check = false;
                break;
            }
        }
 
        if ((modpow(i, p - 1, p) - 1) % p != 0) {
            check = false;
        }
 
        if (check) {
            cnt++;
        }
    }
 
    cout << cnt << endl;
}