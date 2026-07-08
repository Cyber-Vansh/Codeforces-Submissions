#include <bits/stdc++.h>
using namespace std;
 
// ========== DEBUG UTILITIES ==========
//#define cerr cout
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
 
#define int long long
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vector<int>>
#define vpi vector<pair<int,int>>
#define pb push_back
#define MP make_pair
#define endl "
"
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(), v.rend()
#define bpc(x) __builtin_popcount(x)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rev(i,a,b) for (int i=a; i>b; --i)
#define inp(v, n) rep(i, 0, n) cin >> v[i];
#define show(v) for(auto x : v) cout<<x<<" "; cout<<"
"
//priority_queue<vi, vector<vi>, greater<vi>> pq;
const ll mod = 1e9+7;
 
 
void solve(){
    string s;
    cin>>s;
    ll n=s.length();
 
    vi arr(n);
 
 
    rep(i,0,n){
        arr[i]=(s[i]-'0');
    }
 
 
 
    // debug(arr,s,n);
 
    ll a,b;
    cin>>a>>b;
 
    vvi per;
 
    do {
        vi lis;
        for (int i = 0; i < n; i++)
            lis.pb(arr[i]);
        per.pb(lis);
    } while (next_permutation(all(arr)));
 
 
    vi l1=per[a-1];
    vi l2=per[b-1];
 
    debug(l1, l2);
 
    ll A=0;
 
    set<int> st;
 
    rep(i,0,n){
        if(l1[i]==l2[i]){
            debug(l1,l2);
            A++;
            st.insert(l1[i]);
        }
    }
 
    set<int> st2;
 
    rep(i,0,n){
        if(st.find(l1[i])==st.end()){
            st2.insert(l1[i]);
        }
    }
 
    // debug(st);
 
    ll B=0;
 
    rep(i,0,n){
        if(st2.find(l2[i])!=st2.end()){
            B++;
        }
    }
 
    cout<<A<<"A"<<B<<"B"<<endl;
 
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long tt = 1;
    cin >> tt;
    while (tt--){
        solve();
    }    
}