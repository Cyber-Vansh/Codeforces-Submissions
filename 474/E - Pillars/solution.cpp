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
 
 
int n,d;
vector<int> arr;
 
class Node{
public:
    Node *left;
    Node *right;
    int idx;
    int max_count;
    int who;
 
    Node(){
        left = NULL;
        right = NULL;
        idx = -1;
        max_count = 0;
        who = -1;
    }
};
 
int Min;
int Max;
Node *trie = new Node();
 
void insert(int idx,int val){
    Node *curr = trie;
    int l = Min;
    int r = Max;
 
    while (1){
        if (curr->max_count<val){
            curr->max_count = val;
            curr->who = idx;
        }
 
        if (l==r){
            curr->idx = idx;
            break;
        }
 
        int mid = (l+r)/2;
 
        if (arr[idx]<=mid){
            if (curr->left==NULL){
                curr->left = new Node();
            }
            curr = curr->left;
            r = mid;
        }
        else{
            if (curr->right==NULL){
                curr->right = new Node();
            }
            curr = curr->right;
            l = mid+1;
        }
    }
}
 
vector<int> search_min(int val){
    Node *curr = trie;
    int l=Min;
    int r=Max;
 
    int count=0;
    int who=-1;
 
    while (1){
        if (l==r && r==val){
            if (curr->max_count>count){
                count = curr->max_count;
                who = curr->idx;
            }
        }
 
        int mid = (l+r)/2;
 
        if (val>mid){
            if (curr->left!=NULL){
                if (curr->left->max_count>count){
                    count = curr->left->max_count;
                    who = curr->left->who;
                }
            }
            if (curr->right!=NULL){
                curr = curr->right;
                l = mid+1;
            }
            else{
                break;
            }
        }
        else{
            if (curr->left!=NULL){
                curr = curr->left;
                r = mid;
            }
            else{
                break;
            }
        }
    }
 
    return {count, who};
}
 
vector<int> search_max(int val){
    Node *curr = trie;
    int l=Min;
    int r=Max;
 
    int count = 0;
    int who =  -1;
 
    while (1){
        if (l==r && r==val){
            if (curr->max_count>count){
                count = curr->max_count;
                who = curr->idx;
            }
        }
 
        int mid = (l+r)/2;
 
        if (val<=mid){
            if (curr->right!=NULL){
                if (curr->right->max_count>count){
                    count= curr->right->max_count;
                    who = curr->right->who;
                }
            }
            if (curr->left!=NULL){
                curr =  curr->left;
                r = mid;
            }
            else{
                break;
            }
        }
        else{
            if (curr->right!=NULL){
                curr = curr->right;
                l= mid+1;
            }
            else{
                break;
            }
        }
    }
 
    return {count ,who};
}
 
void solve(){
 
    cin >> n >> d;arr.resize(n);
 
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
 
    Min = *min_element(arr.begin(),arr.end());
    Max = *max_element(arr.begin(),arr.end());
 
    int ans = 0;
 
    vector<int> mark(n,-1);
    vector<int> store(n,-1);
 
    for (int i = 0; i < n; i++){
        vector<int> p = search_min(arr[i]-d);
        vector<int> q = search_max(arr[i]+d);
 
        int x = p[0];
        int who1 = p[1];
 
        int y = q[0];
        int who2 = q[1];
 
        if (x>=y){
            mark[i] = who1;
            insert(i,x+1);
        }
        else{
            mark[i] = who2;
            insert(i,y+1);
        }
 
        ans = max(ans,max(x+1,y+1));
        store[i] = max(x+1,y+1);
    }
 
    cout <<ans << endl;
 
    vector<int> final;
 
    int idx = -1;
    for (int i = n-1; i >= 0; i--){
        if (store[i]==ans){
            idx = i;
            break;
        }
    }
 
    while (idx!=-1){
        final.pb(idx+1);
        idx = mark[idx];
    }
 
    reverse(final.begin(),final.end());
 
    for (int x : final){
        cout<<x<<" ";
    }
 
}
 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long tt = 1;
    // cin >> tt;
    while (tt--){
        solve();
    }    
}