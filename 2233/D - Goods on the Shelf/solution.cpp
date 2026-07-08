#include <iostream>
#include <vector>
#include <map>
#include <set>
 
using namespace std;
 
bool is_valid(const vector<int>& arr) {
    if (arr.empty()) return true;
    
    set<int> occur;
    occur.insert(arr[0]);
    int last = arr[0];
 
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] == last) continue;
        
        if (occur.count(arr[i])) {
            return false;
        }
        
        occur.insert(arr[i]);
        last = arr[i];
    }
    return true;
}
 
void solve() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    map<int, vector<int>> freq;
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        freq[arr[i]].push_back(i);
    }
    
    bool check = true;
    int count = 0;
    vector<int> a;
    bool found_a = false;
    
    for (const auto& pair : freq) {
        const vector<int>& j = pair.second;
        bool curr = true;
        
        for (size_t x = 1; x < j.size(); ++x) {
            if (j[x - 1] + 1 != j[x]) {
                curr = false;
            }
        }
        
        if (!curr) {
            count++;
            if (!found_a) {
                a = j;
                found_a = true;
            }
        }
    }
    
    if (count == 0) {
        cout << "YES
";
    } else if (count > 2) {
        cout << "NO
";
    } else {
        check = false;
        count = 0;
        int len_a = a.size();
        
        for (int i = 0; i < len_a; ++i) {
            if (i == 0) {
                if (a[i] + 1 != a[i + 1]) count++;
            } else if (i == len_a - 1) {
                if (a[i - 1] + 1 != a[i]) count++;
            } else {
                if (a[i - 1] + 1 != a[i] && a[i] + 1 != a[i + 1]) count++;
            }
        }
        
        if (count > 3) {
            check = false;
        }
        
        int x = arr[a[0]];
        int left = 0;
        int right = left + len_a - 1;
        int pos = -1;
        int counta = 0;
        
        for (int i = 0; i <= right; ++i) {
            if (arr[i] == x) {
                counta++;
            } else {
                pos = i;
            }
        }
        
        while (right < n && count <= 3) {
            if (counta == len_a - 1) {
                if (left <= a[0] && a[0] <= right) {
                    swap(arr[a[len_a - 1]], arr[pos]);
                    
                    if (is_valid(arr)) {
                        check = true;
                        break;
                    }
                    swap(arr[a[len_a - 1]], arr[pos]); 
                } else {
                    swap(arr[a[0]], arr[pos]);
                    
                    if (is_valid(arr)) {
                        check = true;
                        break;
                    }
                    swap(arr[a[0]], arr[pos]); 
                }
            }
            
            right++;
            left++;
            
            if (right == n) {
                continue;
            }
            
            if (arr[right] != x) {
                pos = right;
            } else {
                counta++;
            }
            
            if (arr[left - 1] == x) {
                counta--;
            }
        }
        
        if (check) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}