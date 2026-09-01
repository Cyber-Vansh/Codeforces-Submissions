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
 
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
 
int n,m,q;
vector<vector<uint64_t>> bit;
 
void update(int r, int c, uint64_t val) {
    int i = r;
    while (i<=n+1) {
        int j = c;
        while (j<=m+1) {
            bit[i][j] ^= val;
            j += j&-j;
        }
        i += i&-i;
    }
}
 
uint64_t query(int r, int c) {
    uint64_t res = 0;
    int i = r;
    while (i>0) {
        int j = c;
        while (j>0) {
            res ^= bit[i][j];
            j -= j&-j;
        }
        i -= i&-i;
    }
    return res;
}
 
void solve(){
    cin>>n>>m>>q;
    
    bit.assign(n+2, vector<uint64_t>(m+2,0));
 
    map<tuple<int,int,int,int>,uint64_t> hashes;
    
    for (int i=0;i<q;i++) {
        int t,r1,c1,r2,c2;
        cin>>t>>r1>>c1>>r2>>c2;
        
        if (t==1) {
            uint64_t h = rng();
            hashes[{r1,c1,r2,c2}] = h;
            
            update(r1,c1,h);
            update(r1,c2+1,h);
            update(r2+1,c1,h);
            update(r2+1,c2+1,h);
        } else if (t==2) {
            uint64_t h = hashes[{r1,c1,r2,c2}];
            hashes.erase({r1,c1,r2,c2});
            
            update(r1,c1,h);
            update(r1,c2+1,h);
            update(r2+1,c1,h);
            update(r2+1,c2+1,h);
        } else {
            if (query(r1,c1)==query(r2,c2)) {
                cout<<"Yes
";
            } else {
                cout<<"No
";
            }
        }
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