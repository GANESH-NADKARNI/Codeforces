#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    int total = 0;
 
    for (int &x : a) {
        cin >> x;
        total += x;
    }
 
    sort(a.rbegin(), a.rend());
 
    int mySum = 0;
    int count = 0;
 
    for (int x : a) {
        mySum += x;
        count++;
 
        if (mySum > total - mySum) {
            break;
        }
    }
 
    cout << count << endl;
 
    return 0;
}