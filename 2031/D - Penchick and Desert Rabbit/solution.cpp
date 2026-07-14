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
 
void update(int node, int start, int end, int idx, int value, vector<int> &tree)
{
    if (start == end)
    {
        tree[node] = max(tree[node], value);
        return;
    }
 
    int mid = (start + end) / 2;
    int left = 2 * node + 1;
    int right = 2 * node + 2;
 
    if (start <= idx && idx <= mid)
    {
        update(left, start, mid, idx, value, tree);
    }
    else
    {
        update(right, mid + 1, end, idx, value, tree);
    }
 
    tree[node] = max(tree[left], tree[right]);
}
 
int query(int node, int start, int end, int l, int r, vector<int> &tree)
{
    if (r < start || end < l)
    {
        return -1e9;
    }
 
    if (l <= start && end <= r)
    {
        return tree[node];
    }
 
    int mid = (start + end) / 2;
    int l_max = query(2 * node + 1, start, mid, l, r, tree);
    int r_max = query(2 * node + 2, mid + 1, end, l, r, tree);
 
    return max(l_max, r_max);
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if (!(cin >> t))
        return 0;
 
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
 
        vector<int> lis(n, 0);
        vector<int> tree(4 * n, 0);
 
        vector<vector<int>> indexes(n + 1);
        for (int i = 0; i < n; i++)
        {
            indexes[arr[i]].push_back(i);
        }
 
        for (int i = 0; i < n; i++)
        {
            lis[i] = arr[i];
            update(0, 0, n - 1, arr[i] - 1, arr[i], tree);
        }
 
        for (int i = n; i > 0; i--)
        {
            if (indexes[i].empty())
            {
                continue;
            }
            int x = query(0, 0, n - 1, 0, i - 2, tree);
 
            for (int k : indexes[i])
            {
                x = max(x, lis[k]);
                for (int j = k; j < n; j++)
                {
                    if (j > k && lis[j] >= i)
                    {
                        break;
                    }
                    lis[j] = max(lis[j], x);
                    update(0, 0, n - 1, arr[j] - 1, lis[j], tree);
                }
            }
        }
 
        for (int i = 0; i < n; i++)
        {
            cout << lis[i] << " ";
        }
        cout << "
";
    }
 
    return 0;
}