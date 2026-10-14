#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
 
        vector<long long> p(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;
            p[i] = p[i - 1] + x;
        }
 
        vector<long long> cnt(k, 0);
        long long ans = 0;
 
        for (int j = k + 1; j <= n; j++) {
            cnt[p[j - k - 1] % k]++;
            ans += cnt[p[j] % k];
        }
 
        cout << ans << "
";
    }
    return 0;
}