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
 
int MOD = 1e9+7;
 
ll code(ll node, map<ll,vector<ll>> &adj, set<ll> &visited) {
    if (adj[node].size()==0) {
        return node;
    }
 
    visited.insert(node);
 
    ll Max = node;
 
    for (auto i : adj[node]) {
        if (visited.find(i)!=visited.end()) continue;
        
        Max = max(Max,code(i,adj,visited));
    }
 
    return Max;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin>>n;
 
        vector<ll> arr(n);
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
 
        map<ll,vector<ll>> adj;
 
        for (int i=1; i<n; i++) {
            ll x = arr[i]+i;
 
            adj[x].pb(x+i);
        }
 
        set<ll> visited;
 
        cout<<code(n,adj,visited)<<"
";
 
    }
 
    return 0;
}