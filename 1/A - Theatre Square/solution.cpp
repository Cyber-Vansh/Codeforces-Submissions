#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a;
    cin >> n >> m >> a;
    
    long long x = n/a;
    long long y = m/a;
 
    if (n%a!=0) {
        x++;
    }
    if (m%a!=0) {
        y++;
    }
 
    long long ans = x*y;
 
    cout << ans;
 
    return 0;
}