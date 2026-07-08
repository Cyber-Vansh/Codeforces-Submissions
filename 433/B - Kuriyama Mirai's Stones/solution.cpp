#include <iostream> 
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
 
    vector<long long> arr(n+1);
    arr[0] = 0;
    for (int i=1; i<n+1; i++) {
        cin>>arr[i];
    }
 
    vector<long long> sorted(n+1);
    sorted[0] = 0;
    for (int i=1; i<n+1; i++) {
        sorted[i] = arr[i];
    }
 
    sort(sorted.begin(),sorted.end());
 
    for (int i=2; i<n+1; i++) {
        arr[i] += arr[i-1];
        sorted[i] += sorted[i-1];
    }
 
    int m;
    cin>>m;
 
    for (int i=0; i<m; i++) {
        int type,l,r;
        cin>>type>>l>>r;
 
        if (type==1) {
            if (l==0) {
                cout<<arr[r]<<"
";
            } else {
                cout<<arr[r]-arr[l-1]<<"
";
            }
        } else {
            if (l==0) {
                cout<<sorted[r]<<"
";
            } else {
                cout<<sorted[r]-sorted[l-1]<<"
";
            }
        }
    }
 
    return 0;
}