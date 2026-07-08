#include <iostream> 
#include <vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,h;
    cin >> n >> h;
 
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
 
    int ans = 0;
 
    for (int i=0; i<n; i++) {
        if (arr[i]>h) {
            ans++;
        }
        ans++;
    }
 
    cout << ans << "
";
 
    return 0;
}