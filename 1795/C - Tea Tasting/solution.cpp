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
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin>>n;
 
        vector<ll> a(n);
        vector<ll> b(n);
 
        for (int i=0;i<n;i++) {
            cin>>a[i];
        }
        for (int i=0;i<n;i++) {
            cin>>b[i];
        }
 
        vector<ll> pre(n+1);
        pre[0] = 0;
 
        for (int i=0;i<n;i++) {
            pre[i+1] = pre[i]+b[i];
        }
 
        vector<ll> ans(n);
        vector<ll> lis(n+1);
 
        for (int i=0;i<n;i++) {
            ll prev = pre[i];
 
            int idx = lower_bound(pre.begin()+i+1,pre.end(),prev+a[i])-pre.begin();
 
 
            lis[i]++;
            lis[idx-1]--;
 
            if (idx-1<n) {
                ans[idx-1] += a[i]-(pre[idx-1]-prev);
            }
        }
 
        for (int i=0;i<n;i++) {
            if (i>0) {
                lis[i] += lis[i-1];
            }
 
            ans[i] += b[i]*lis[i];
 
            cout<<ans[i]<<" ";
        }
 
        cout<<"
";
    }
 
    return 0;
}