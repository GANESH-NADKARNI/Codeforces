#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
 
        int l = 0, r = n - 1;
 
        while (l < n && a[l] != 1) {
            if (a[l] == -1) {
                a[l] = 1;
                break;
            }
            l++;
        }
 
        while (r >= 0 && a[r] != 1) {
            if (a[r] == -1) {
                a[r] = 1;
                break;
            }
            r--;
        }
 
        for (int &x : a)
            if (x == -1)
                x = 0;
 
        for (int x : a)
            cout << x << " ";
 
        cout << '
';
    }
 
    return 0;
}