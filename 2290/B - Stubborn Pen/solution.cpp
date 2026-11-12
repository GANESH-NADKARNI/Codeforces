#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        
        cin>>n;
        string s;
        cin>>s;
        
        char current = 'R';
        int ans = 0;
        for(int i = 0;i < n; i++){
        if(s[i] != current){
            ans++;
            current = s[i];
        }
        if(current == 'R'){
            current = 'B';
        }
        else{
            current = 'R';
        }
        }
        cout << ans << endl;
    }
    return 0;
}