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
 
#define int long long
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
 
int M = 1e9 + 7;
 
vector<int> arr;
vector<int> seg,lazy;
 
void build(int l, int r, int pos) {
    if (l==r) {
        seg[pos] = arr[l];
        return;
    }
 
    int mid = (l+r)/2;
 
    build(l,mid,pos*2+1);
    build(mid+1,r,pos*2+2);
 
    seg[pos] = min(seg[pos*2+1],seg[pos*2+2]);
}
 
void push(int l, int r, int pos) {
    if (lazy[pos]==0) {
        return;
    }
 
    int mid = (l+r)/2;
 
    seg[pos*2+1] += lazy[pos];
    seg[pos*2+2] += lazy[pos];
 
    lazy[pos*2+1] += lazy[pos];
    lazy[pos*2+2] += lazy[pos];
 
    lazy[pos] = 0;
}
 
void update(int l, int r, int pos, int ql, int qr, int val) {
    if (ql<=l && r<=qr) {
        seg[pos] += val;
        lazy[pos] += val;
        return;
    }
 
    push(l,r,pos);
 
    int mid = (l+r)/2;
 
    if (qr<=mid) {
        update(l,mid,pos*2+1,ql,qr,val);
    } else if (ql>mid) {
        update(mid+1,r,pos*2+2,ql,qr,val);
    } else {
        update(l,mid,pos*2+1,ql,qr,val);
        update(mid+1,r,pos*2+2,ql,qr,val);
    }
 
    seg[pos] = min(seg[pos*2+1],seg[pos*2+2]);
}
 
int query(int l, int r, int pos, int ql, int qr) {
    if (ql<=l && r<=qr) {
        return seg[pos];
    }
 
    push(l,r,pos);
 
    int mid = (l+r)/2;
 
    if (qr<=mid) {
        return query(l,mid,pos*2+1,ql,qr);
    } else if (ql>mid) {
        return query(mid+1,r,pos*2+2,ql,qr);
    } else {
        return min(query(l,mid,pos*2+1,ql,qr),query(mid+1,r,pos*2+2,ql,qr));
    }
}
 
void solve(){
    int n;
    cin>>n;
 
    arr.assign(n,0);
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
 
    seg.assign(4*n,0);
    lazy.assign(4*n,0);
 
    build(0,n-1,0);
 
    int m;
    cin>>m;
 
    for (int i=0;i<m;) {
        string line;
        getline(cin,line);
 
        if (line.empty()) continue;
        i++;
 
        stringstream ss(line);
 
        int l,r,v;
        ss>>l>>r;
 
        if (ss>>v) {
            if (l<=r) {
                update(0,n-1,0,l,r,v);
            } else {
                update(0,n-1,0,l,n-1,v);
                update(0,n-1,0,0,r,v);
            }
        } else {
            if (l<=r) {
                cout<<query(0,n-1,0,l,r)<<endl;
            } else {
                cout<<min(query(0,n-1,0,l,n-1),query(0,n-1,0,0,r))<<endl;
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