#include <bits/stdc++.h>
using namespace std;
 
int n, m;
vector<vector<int>> graph;
vector<vector<long long>> dp;
 
long long code(int node, int mask) {
    if (dp[node][mask] != -1)
        return dp[node][mask];
 
    long long curr = 0;
    int start = __builtin_ctz(mask);
 
    for (int i : graph[node]) {
        if (i < start)
            continue;
 
        if ((1 << i) & mask) {
            if (i == start)
                curr += 1;
        } else {
            curr += code(i, mask ^ (1 << i));
        }
    }
 
    dp[node][mask] = curr;
    return curr;
}
 
int main() {
    cin >> n >> m;
 
    graph.resize(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
 
        u -= 1;
        v -= 1;
 
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
 
    dp.assign(n, vector<long long>((1 << (n + 1)), -1));
 
    long long ans = 0;
 
    for (int i = 0; i < n; i++) {
        ans += code(i, 1 << i);
    }
 
    cout << (ans - m) / 2 << endl;
 
    return 0;
}