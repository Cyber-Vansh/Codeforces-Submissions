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
 
vector<vector<ll>> tree;
vector<vector<ll>> dp;
 
ll update(int idx, ll val, int k, int left, int right, int pos)
{
    if (left == right)
    {
        tree[pos][k] += val;
        return tree[pos][k];
    }
 
    int mid = (left + right) / 2;
 
    if (idx <= mid)
    {
        ll res_left = update(idx, val, k, left, mid, pos * 2 + 1);
        ll res_right = tree[pos * 2 + 2][k];
 
        tree[pos][k] = res_left + res_right;
    }
    else
    {
        ll res_left = tree[pos * 2 + 1][k];
        ll res_right = update(idx, val, k, mid + 1, right, pos * 2 + 2);
 
        tree[pos][k] = res_left + res_right;
    }
 
    return tree[pos][k];
}
 
ll query(int l, int r, int k, int left, int right, int pos)
{
    if (r < left || l > right)
    {
        return 0;
    }
 
    if (l <= left && r >= right)
    {
        return tree[pos][k];
    }
 
    int mid = (left + right) / 2;
 
    ll res_left = 0;
    ll res_right = 0;
 
    if (l <= mid)
    {
        res_left = query(l, r, k, left, mid, pos * 2 + 1);
    }
    if (r > mid)
    {
        res_right = query(l, r, k, mid + 1, right, pos * 2 + 2);
    }
 
    return res_left + res_right;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, k;
    cin >> n >> k;
    k++;
 
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    tree.assign(4 * (n+1), vector<ll>(k + 1, 0));
    dp.assign(n, vector<ll>(k + 1, 0));
 
    // dp[0][1] = 1;
    // update(arr[0], 1, 1, 0, n - 1, 0);
 
    for (int i = 0; i < n; i++)
    {
        dp[i][1] = 1;
        update(arr[i], 1, 1, 0, n, 0);
 
        for (int j = 1; j < k; j++)
        {
            dp[i][j + 1] = query(0, arr[i] - 1, j, 0, n, 0);
            update(arr[i], dp[i][j + 1], j + 1, 0, n, 0);
        }
    }
 
    // for (int i=0; i<n;i++) {
    //     cout <<arr[i]<<" ";
    // }
    // cout<<"
";
 
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= k; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << " 
";
    // }
 
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += dp[i][k];
    }
 
    cout << ans << "
";
 
    return 0;
}