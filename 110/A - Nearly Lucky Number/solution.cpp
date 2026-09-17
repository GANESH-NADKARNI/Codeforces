#include <bits/stdc++.h>
using namespace std;
 
bool isLucky(int x) {
    if (x == 0)
        return false;
 
    while (x > 0) {
        int digit = x % 10;
 
        if (digit != 4 && digit != 7)
            return false;
 
        x /= 10;
    }
 
    return true;
}
 
int main() {
    string n;
    cin >> n;
 
    int luckyDigits = 0;
 
    for (char c : n) {
        if (c == '4' || c == '7')
            luckyDigits++;
    }
 
    if (isLucky(luckyDigits))
        cout << "YES
";
    else
        cout << "NO
";
 
    return 0;
}