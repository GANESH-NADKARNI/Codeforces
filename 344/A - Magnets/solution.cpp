#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,prev,res = 0;
    cin >> n;
    cin >> prev;
    n--;
    while(n--){
        int x;
        cin >> x;
        if(x != prev){
            res++;
        }
        prev = x;
    }
    cout << (res + 1) << endl;
    return 0;
}