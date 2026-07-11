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
        string s;
        cin >> s;
 
        int n = s.size();
 
        set<int> st;
        for (int i = 3; i < n; i++)
        {
            string sub = s.substr(i - 3, 4);
            if (sub == "1100")
            {
                st.insert(i);
            }
        }
 
        int q;
        cin >> q;
 
        while (q--)
        {
            int i;
            char v;
            cin >> i >> v;
 
            i--;
 
            if (s[i] != v)
            {
                if (s[i] == '1')
                {
                    s[i] = '0';
                    if (st.find(i + 2) != st.end())
                    {
                        st.erase(i + 2);
                    }
                    if (st.find(i + 3) != st.end())
                    {
                        st.erase(i + 3);
                    }
                    if (i + 1 < n && i - 2 >= 0)
                    {
                        string sub1 = s.substr(i - 2, 4);
 
                        if (sub1 == "1100")
                        {
                            st.insert(i + 1);
                        }
                    }
                    if (i - 3 >= 0)
                    {
                        string sub2 = s.substr(i - 3, 4);
 
                        if (sub2 == "1100")
                        {
                            st.insert(i);
                        }
                    }
                }
                else
                {
                    s[i] = '1';
                    if (st.find(i + 1) != st.end())
                    {
                        st.erase(i + 1);
                    }
                    if (st.find(i) != st.end())
                    {
                        st.erase(i);
                    }
                    if (i + 3 < n)
                    {
                        string sub1 = s.substr(i, 4);
 
                        if (sub1 == "1100")
                        {
                            st.insert(i + 3);
                        }
                    }
                    if (i + 2 < n && i - 1 >= 0)
                    {
                        string sub1 = s.substr(i-1, 4);
 
                        if (sub1 == "1100")
                        {
                            st.insert(i + 2);
                        }
                    }
                }
            }
 
            if (st.size() > 0)
            {
                cout << "YES" << "
";
            }
            else
            {
                cout << "NO" << "
";
            }
        }
    }
 
    return 0;
}