#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int h;
        cin>>h;
 
        int ans = INT_MAX;
 
        for(int c = 0;c <=  244; c++){
            int damage = 0;
            int power = 1;
            for(int j = 0;j <c ; j++){
                power++;
            }
            for(int i = 1; i < 244; i++){
                damage += power;
                power = max(1,power-1);
 
                if(damage >= h){
                    ans = min(ans,c+i);
                    break;
                }
            }
          
        }
            cout<<ans<<'
';
        }
        return 0;
    }
 