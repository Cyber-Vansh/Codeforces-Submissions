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
 
        vector<int> arr(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> existed(*max_element(all(arr)) + 2);
        vector<int> freq(*max_element(all(arr)) + 2);
 
        set<int> st;
 
        for (int i = 0; i < n; i++)
        {
            existed[arr[i]] = 1;
            freq[arr[i]]++;
            st.insert(arr[i]);
        }
 
        // for (auto i : st)
        // {
        //     cout << i << "
";
        // }
 
        int ans = 0;
 
        for (int i = 0; i < freq.size(); i++)
        {
            if (freq[i] > 0)
            {
                ans++;
                continue;
            }
 
            if (existed[i] == 1)
            {
                auto it = st.lower_bound(i + 1);
 
                if (it == st.end())
                {
                    break;
                }
 
                int idx = *it;
 
                // cout<<idx<<"
";
 
                freq[idx]--;
 
                if (freq[idx] == 0)
                {
                    st.erase(idx);
                }
            }
            else
            {
                auto it = st.lower_bound(2 * i + 1);
 
                if (it == st.end())
                {
                    break;
                }
 
                int idx = *it;
 
                freq[idx]--;
 
                if (freq[idx] == 0)
                {
                    st.erase(idx);
                }
            }
 
            ans++;
        }
 
        cout << ans << "
";
    }
 
    return 0;
}