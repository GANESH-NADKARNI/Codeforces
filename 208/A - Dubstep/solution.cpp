#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string word = "";
    bool first = true;
 
    for (int i = 0; i < s.size();) {
        if (s.substr(i, 3) == "WUB") {
            if (!word.empty()) {
                if (!first) cout << " ";
                cout << word;
                word = "";
                first = false;
            }
            i += 3;
        } else {
            word += s[i];
            i++;
        }
    }
 
    if (!word.empty()) {
        if (!first) cout << " ";
        cout << word;
    }
 
    return 0;
}