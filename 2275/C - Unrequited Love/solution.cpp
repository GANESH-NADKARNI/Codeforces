#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<long long> a(n);
        
        for(auto &x: a){
            cin>> x;
        }
        
        vector<long long> value(n - 4);
        
        for(int i = 0; i < n-4 ; i++){
            value[i]= a[i] + a[i+2] - a[i+4];
        }
        
        long long ans = 0;
        
        map<long long, long long> freq;
        
        for(int i = 0;i < n-4; i++){
            ans += freq[value[i]];
            freq[value[i]]++;
        }
        
        for(int i = 0; i + 2 < n-4; i++){
            if(value[i] == value[i+2]){
                ans--;
            }
        }
        
        for(int i = 0; i + 4 < n - 4;i++){
            if(value[i] == value[i+4]){
                ans--;
            }
        }
        
        cout<< ans << '
';
    }
    
    return 0;
}