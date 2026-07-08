#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
 
    vector<int> store(59, 0);
 
    for (int ele = 1; ele < 59; ele++) {
        vector<int> curr;
 
        for (int i = 0; i < (int)primes.size(); i++) {
            int x = ele;
            int count = 0;
 
            while (x % primes[i] == 0) {
                count++;
                x /= primes[i];
            }
 
            curr.push_back(count > 0 ? 1 : 0);
        }
 
        // build mask (reverse like Python)
        int mask = 0;
        for (int i = 0; i < (int)curr.size(); i++) {
            if (curr[curr.size() - 1 - i]) {
                mask |= (1 << i);
            }
        }
 
        store[ele] = mask;
    }
 
    const int MAXM = 1 << primes.size(); // 1<<16
    const int INF = 1e9;
 
    vector<vector<int>> dp(n + 1, vector<int>(MAXM, INF));
    vector<vector<pair<int,int>>> prev(n + 1, vector<pair<int,int>>(MAXM, {-1, -1}));
 
    dp[0][0] = 0;
 
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < 59; j++) {
            for (int k = 0; k < MAXM; k++) {
                if (dp[i][k] != INF && (store[j] & k) == 0) {
                    int curr = dp[i][k] + abs(arr[i] - j);
 
                    int nk = store[j] | k;
                    if (curr < dp[i + 1][nk]) {
                        dp[i + 1][nk] = curr;
                        prev[i + 1][nk] = {k, j};
                    }
                }
            }
        }
    }
 
    int best = 0;
    for (int i = 0; i < MAXM; i++) {
        if (dp[n][i] < dp[n][best]) {
            best = i;
        }
    }
 
    vector<int> ans(n);
    int curr = best;
 
    for (int i = n; i > 0; i--) {
        auto [prev_curr, val] = prev[i][curr];
        ans[i - 1] = val;
        curr = prev_curr;
    }
 
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "
";
 
    return 0;
}