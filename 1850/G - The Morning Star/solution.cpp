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
 
    while (t--)
    {
        int n;
        cin >> n;
 
        map<int, ll> v;
        map<int, ll> h;
        map<int, ll> d1;
        map<int, ll> d2;
 
        while (n--)
        {
            int x, y;
            cin >> x >> y;
 
            v[x] = v[x]+1;
            h[y] = h[y]+1;
            d1[x-y] = d1[x-y]+1;
            d2[x+y] = d2[x+y]+1;
        }
 
        ll ans=0;
 
        for (auto[key,value]:v) {
            if (value>1) {
                ans += (value*(value-1))/2;
            }
        }
        for (auto[key,value]:h) {
            if (value>1) {
                ans += (value*(value-1))/2;
            }
        }
        for (auto[key,value]:d1) {
            if (value>1) {
                ans += (value*(value-1))/2;
            }
        }
        for (auto[key,value]:d2) {
            if (value>1) {
                ans += (value*(value-1))/2;
            }
        }
 
        cout<<ans*2<<"
";
    }
 
    return 0;
}