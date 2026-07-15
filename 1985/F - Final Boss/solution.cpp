#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
using namespace std;
using ll = long long;
#define pb push_back
#define all(x) x.begin(), x.end()
 
int MOD = 1e9 + 7;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    for (int _ = 0; _ < t; ++_)
    {
        ll h, n;
        cin >> h >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        vector<ll> c(n);
        for (int i = 0; i < n; ++i)
            cin >> c[i];
 
        ll left = 1;
        ll right = h * (*max_element(all(c)));
 
        ll ans = 2e18;
 
        while (left <= right)
        {
            ll mid = (left + right) / 2;
 
            ll Sum = 0;
            for (int i = 0; i < n; ++i)
            {
                Sum += (1 + (mid - 1) / c[i]) * a[i];
                if (Sum >= h)
                    break;
            }
 
            if (Sum >= h)
            {
                ans = min(ans, mid);
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
 
        cout << ans << "
";
    }
 
    return 0;
}