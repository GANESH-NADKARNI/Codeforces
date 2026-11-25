#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int zeros=0,n,ans=0;
        cin>>n;
        
        for(int i = 0; i < n; i++){
            int j;
            cin>>j;
            if(j == 0){
                zeros++;
            }
            else{
                zeros = 0;
            }
            ans = max(ans,zeros);
        }
        cout<<ans<<"
";
    }
    return 0;
}