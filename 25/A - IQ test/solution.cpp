#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    int even = 0, odd = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
 
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
 
    for (int i = 0; i < n; i++) {
        if (even > odd && a[i] % 2 != 0) {
            cout << i + 1;
            break;
        }
 
        if (odd > even && a[i] % 2 == 0) {
            cout << i + 1;
            break;
        }
    }
 
    return 0;
}