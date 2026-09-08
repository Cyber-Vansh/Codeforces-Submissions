#include <bits/stdc++.h>
using namespace std;
 
namespace __DEBUG_UTIL__ { void print(const char *x) { cerr << x; } void print(bool x) { cerr << (x ? "T" : "F"); } void print(char x) { cerr << '\'' << x << '\''; } void print(signed short int x) { cerr << x; } void print(unsigned short int x) { cerr << x; } void print(signed int x) { cerr << x; } void print(unsigned int x) { cerr << x; } void print(signed long int x) { cerr << x; } void print(unsigned long int x) { cerr << x; } void print(signed long long int x) { cerr << x; } void print(unsigned long long int x) { cerr << x; } void print(float x) { cerr << x; } void print(double x) { cerr << x; } void print(long double x) { cerr << x; } void print(string x) { cerr << '\"' << x << '\"'; } template <size_t N> void print(bitset<N> x) { cerr << x; } void print(vector<bool> v) { int f = 0; cerr << '{'; for (auto &&i : v) cerr << (f++ ? "," : "") << (i ? "T" : "F"); cerr << "}"; } template <typename T> void print(T &&x); template <typename T> void print(vector<vector<T>> mat); template <typename T, size_t N, size_t M> void print(T (&mat)[N][M]); template <typename F, typename S> void print(pair<F, S> x); template <typename T, size_t N> struct Tuple; template <typename T> struct Tuple<T, 1>; template <typename... Args> void print(tuple<Args...> t); template <typename... T> void print(priority_queue<T...> pq); template <typename T> void print(stack<T> st); template <typename T> void print(queue<T> q); template <typename T> void print(T &&x) { int f = 0; cerr << '{'; for (auto &&i : x) cerr << (f++ ? "," : ""), print(i); cerr << "}"; } template <typename T> void print(vector<vector<T>> mat) { int f = 0; cerr << "
~~~~~
"; for (auto &&i : mat) { cerr << setw(2) << left << f++, print(i), cerr << "
"; } cerr << "~~~~~
"; } template <typename T, size_t N, size_t M> void print(T (&mat)[N][M]) { int f = 0; cerr << "
~~~~~
"; for (auto &&i : mat) { cerr << setw(2) << left << f++, print(i), cerr << "
"; } cerr << "~~~~~
"; } template <typename F, typename S> void print(pair<F, S> x) { cerr << '('; print(x.first); cerr << ','; print(x.second); cerr << ')'; } template <typename T, size_t N> struct Tuple { static void printTuple(T t) { Tuple<T, N - 1>::printTuple(t); cerr << ",", print(get<N - 1>(t)); } }; template <typename T> struct Tuple<T, 1> { static void printTuple(T t) { print(get<0>(t)); } }; template <typename... Args> void print(tuple<Args...> t) { cerr << "("; Tuple<decltype(t), sizeof...(Args)>::printTuple(t); cerr << ")"; } template <typename... T> void print(priority_queue<T...> pq) { int f = 0; cerr << '{'; while (!pq.empty()) cerr << (f++ ? "," : ""), print(pq.top()), pq.pop(); cerr << "}"; } template <typename T> void print(stack<T> st) { int f = 0; cerr << '{'; while (!st.empty()) cerr << (f++ ? "," : ""), print(st.top()), st.pop(); cerr << "}"; } template <typename T> void print(queue<T> q) { int f = 0; cerr << '{'; while (!q.empty()) cerr << (f++ ? "," : ""), print(q.front()), q.pop(); cerr << "}"; } void printer(const char *) {} template <typename T, typename... V> void printer(const char *names, T &&head, V &&...tail) { int i = 0; for (int bracket = 0; names[i] != '\0' and (names[i] != ',' or bracket > 0); i++) if (names[i] == '(' or names[i] == '<' or names[i] == '{') bracket++; else if (names[i] == ')' or names[i] == '>' or names[i] == '}') bracket--; cerr.write(names, i) << " = "; print(head); if (sizeof...(tail)) cerr << " ||", printer(names + i + 1, tail...); else cerr << "]
"; } }
#ifndef ONLINE_JUDGE
#define debug(...) cerr << __LINE__ << ": [", __DEBUG_UTIL__::printer(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...)
#endif
 
#define int int
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
 
int M = 1e9 + 7;
 
vector<int> c;
vector<int> arr;
vector<int> first;
vector<int> last;
 
int code(int k, vector<int> &count,vector<int> &block, int s) {
    int ans = 0;
    int i = k;
 
    while (i<count.size()) {
        if (i%s==0) {
            ans += block[i/s];
            i += s;
        } else {
            ans += count[i];
            i++;
        }
    }
 
    return ans;
}
 
void dfs(int node, int prev, vector<vector<int>> &tree) {
    arr.pb(c[node]);
 
    first[node] = arr.size()-1;
 
    for (auto i: tree[node]) {
        if (i!=prev) {
            dfs(i,node,tree);
        }
    }
 
    last[node] = arr.size()-1;
}
 
void solve(){
    int n,m;
    cin>>n>>m;
 
    c.assign(n+1,0);
    for (int i=1;i<=n;i++) {
        cin>>c[i];
    }
 
    vector<vector<int>> tree(n+1);
    for (int i=0;i<n-1;i++) {
        int u,v;
        cin>>u>>v;
 
        tree[u].pb(v);
        tree[v].pb(u);
    }
 
    first.assign(n+1,0);
    last.assign(n+1,0);
 
    dfs(1,-1,tree);
 
    vector<vector<int>> queries(m);
    for (int i=0;i<m;i++) {
        int v,k;
        cin>>v>>k;
 
        queries[i] = {first[v],last[v],k,i};
    }
 
    int s = sqrt(n);
 
    sort(all(queries), [&](const vector<int> &a, const vector<int> &b) {
        if ((a[0]/s)!=(b[0]/s)) {
            return a[0]/s < b[0]/s;
        }
        return a[1] < b[1];
    });
 
    int curL = 0;
    int curR = -1;
 
    vector<int> freq(*max_element(all(c))+1,0);
    vector<int> count(n+1,0);
    vector<int> block(n/s+2,0);
 
    vector<int> ans(m);
 
    for (int i=0;i<m;i++) {
        int l = queries[i][0];
        int r = queries[i][1];
        int k = queries[i][2];
        int idx = queries[i][3];
 
        while (curR<r) {
            curR++;
 
            if (count[freq[arr[curR]]]) {
                count[freq[arr[curR]]]--;
                block[freq[arr[curR]]/s]--;
            }
            freq[arr[curR]]++;
            count[freq[arr[curR]]]++;
            block[freq[arr[curR]]/s]++;
        }
 
        while (curL>l) {
            curL--;
 
            if (count[freq[arr[curL]]]) {
                count[freq[arr[curL]]]--;
                block[freq[arr[curL]]/s]--;
            }
            freq[arr[curL]]++;
            count[freq[arr[curL]]]++;
            block[freq[arr[curL]]/s]++;
        }
 
        while (curR>r) {
            count[freq[arr[curR]]]--;
            block[freq[arr[curR]]/s]--;
            freq[arr[curR]]--;
            if (freq[arr[curR]]) {
                count[freq[arr[curR]]]++;
                block[freq[arr[curR]]/s]++;
            }
 
            curR--;
        }
 
        while (curL<l) {
            count[freq[arr[curL]]]--;
            block[freq[arr[curL]]/s]--;
            freq[arr[curL]]--;
            if (freq[arr[curL]]) {
                count[freq[arr[curL]]]++;
                block[freq[arr[curL]]/s]++;
            }
 
            curL++;
        }
 
        ans[idx] = code(k,count,block,s);
    }
 
    for (int i=0;i<m;i++) {
        cout<<ans[i]<<endl;
    }
}
 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t = 1;
    // cin >> t;
    while (t--){
        solve();
    }
}