#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int i = 0, j = n - 1;
    int sereja = 0, dima = 0;
    int turn = 0;
 
    while (i <= j) {
        int card;
 
        if (a[i] > a[j]) {
            card = a[i++];
        } else {
            card = a[j--];
        }
 
        if (turn == 0) {
            sereja += card;
        } else {
            dima += card;
        }
 
        turn = 1 - turn;
    }
 
    cout << sereja << " " << dima << endl;
 
    return 0;
}