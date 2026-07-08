#include <iostream> 
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
 
    stack<char> st;
 
    for (int i=0; i<s.size(); i++) {
        if (!st.empty() && st.top()==s[i]) {
            st.pop();
        } else {
            st.push(s[i]);
        }
    }
 
    if (st.empty()) {
        cout<<"Yes"<<"
";
    } else {
        cout<<"No"<<"
";
    }
 
    return 0;
}