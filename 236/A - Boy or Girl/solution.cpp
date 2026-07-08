#include <iostream> 
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
 
    set<char> unique;
 
    for (int i=0; i<s.size(); i++) {
        unique.insert(s[i]);
    }
 
    if (unique.size()%2==0) {
        cout << "CHAT WITH HER!" << "
";
    } else {
        cout << "IGNORE HIM!" << "
";
    }
 
    return 0;
}