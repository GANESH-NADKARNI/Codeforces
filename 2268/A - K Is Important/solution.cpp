#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<long long> a(n);
 
        for (auto &x : a)
            cin >> x;
 
        long long ans = 0;
 
        while ((int)a.size() >= k) {
            int m = a.size();
 
            int x = k - 1;
            int y = m - k;
 
            if (a[x] >= a[y]) {
                ans += a[x];
                a.erase(a.begin() + x);
            } else {
                ans += a[y];
                a.erase(a.begin() + y);
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}