#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int t; 
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        string s;
        
        cin >>s;
        
        int ans = 0;
        while(true){
        char x = 'a';
        for(int i = 0;i < n/2; i++){
            if(s[i] != s[n-1-i]){
                x = max(x,max(s[i] , s[n-1-i]));
            }
        }
        if(x == 'a')break;
        
        for(int i = 0;i < n;i++){
            if(s[i] == x){
                s[i]--;
            }
        }
        ans++;
        }
        
        cout<<ans<<endl;
        
    }
    return 0;
}