#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while (t--) {
        int ans = 1;
        string s;
        cin >> s;
        if(s.find("111") != string::npos || s.find("000") != string::npos) {
            ans++;
        }
        if(s.find("101") != string::npos || s.find("010") != string::npos) {
            ans++;
        }
        cout << ans << "
";
    }
    return 0;
}