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
 
vector<vector<pair<pair<int,int>,int>>> adj;
vector<int> tree_edges;
vector<int> dis;
 
void add(int l, int r, int pos, int ql, int qr, pair<pair<int,int>,int> range) {
    if (ql<=l && r<=qr) {
        adj[pos].pb(range);
        tree_edges[pos]++;
        return;
    }
 
    int mid = (l+r)/2;
 
    if (ql<=mid) {
        add(l,mid,pos*2+1,ql,qr,range);
    }
    if (qr>mid) {
        add(mid+1,r,pos*2+2,ql,qr,range);
    }
 
    tree_edges[pos] = adj[pos].size() + tree_edges[pos*2+1] + tree_edges[pos*2+2];
}
 
void get(int l, int r, int pos, int ql, int qr, vector<pair<pair<int,int>,int>> &ranges) {
    if (tree_edges[pos]==0) {
        return; 
    }
 
    for (auto range: adj[pos]) {
        ranges.pb(range);
    }
    adj[pos].clear();
 
    if (l==r) {
        tree_edges[pos] = 0;
        return;
    }
 
    int mid = (l+r)/2;
 
    if (ql<=mid) {
        get(l,mid,pos*2+1,ql,qr,ranges);
    }
    if (qr>mid) {
        get(mid+1,r,pos*2+2,ql,qr,ranges);
    }
 
    tree_edges[pos] = adj[pos].size()+tree_edges[pos*2+1]+tree_edges[pos*2+2];
}
 
void update(int l, int r, int pos, int ql, int qr, int val) {
    if (ql<=l && r<=qr) {
        dis[pos] = min(dis[pos],val);
        return;
    }
 
    int mid = (l+r)/2;
 
    if (ql<=mid) {
        update(l,mid,pos*2+1,ql,qr,val);
    }
    if (qr>mid) {
        update(mid+1,r,pos*2+2,ql,qr,val);
    }
 
    dis[pos] = min(dis[pos],max(dis[pos*2+1],dis[pos*2+2]));
}
 
int query(int l, int r, int pos, int ql, int qr) {
    if (ql<=l && r<=qr) {
        return dis[pos];
    }
 
    int mid = (l+r)/2;
 
    int ans = 0;
 
    if (ql<=mid) {
        ans = max(ans,query(l,mid,pos*2+1,ql,qr));
    }
    if (qr>mid) {
        ans = max(ans,query(mid+1,r,pos*2+2,ql,qr));
    }
 
    ans = min(ans,dis[pos]);
 
    return ans;
}
 
int final(int l, int r, int pos, int idx) {
    if (l==r) {
        return dis[pos];
    }
 
    int mid = (l+r)/2;
 
    int ans = dis[pos];
 
    if (idx<=mid) {
        ans = min(ans,final(l,mid,pos*2+1,idx));
    } else {
        ans = min(ans,final(mid+1,r,pos*2+2,idx));
    }
 
    return ans;
}
 
void solve(){
    int n,q,s;
    cin>>n>>q>>s;
 
    adj.assign(4*n+5,vector<pair<pair<int,int>,int>>());
    tree_edges.assign(4*n+5,0);
 
    for (int i=0;i<q;i++) {
        int t;
        cin>>t;
 
        if (t==1) {
            int v,u,w;
            cin>>v>>u>>w;
 
            add(1,n,0,v,v,{{u,u},w});
        } else {
            int v,l,r,w;
            cin>>v>>l>>r>>w;
 
            if (t==2) {
                add(1,n,0,v,v,{{l,r},w});
            } else {
                add(1,n,0,l,r,{{v,v},w});
            }
        }
    }
 
    dis.assign(4*n+5,4e18);
 
    priority_queue<pair<int,pair<int,int>>> qu;
 
    qu.push({0,{s,s}});
    update(1,n,0,s,s,0);
 
    while (qu.size()) {
        auto [dis,range] = qu.top();
        qu.pop();
 
        dis = -dis;
 
        vector<pair<pair<int,int>,int>> ranges;
        get(1,n,0,range.first,range.second,ranges);
 
        for (auto [range,w]: ranges) {
            if (query(1,n,0,range.first,range.second)>dis+w) {
                qu.push({-dis-w,{range.first,range.second}});
                update(1,n,0,range.first,range.second,dis+w);
            }
        }
    }
 
    for (int i=1;i<=n;i++) {
        int a = final(1,n,0,i);
 
        if (a==4e18) {
            cout<<-1<<" ";
        } else {
            cout<<a<<" ";
        }
    }
    cout<<endl;
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