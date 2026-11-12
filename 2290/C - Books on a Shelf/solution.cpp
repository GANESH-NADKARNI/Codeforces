#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int> a(n),ans(n);
        
        for(int i = 0;i < n; i++){
            cin>>a[i];
        }
        
        sort(a.begin(),a.end());
        
        int l = 0,r = n-1;
        
        for(int i = 0;i < n;i++){
            if(i % 2 == 0){
                ans[l] = a[i];
                l++;
            }
            else{
                ans[r] = a[i];
                r--;
            }
        }
        int maxi = 0, visible = 0;
        for(int i = 0; i < n; i++){
            if(ans[i] > maxi){
                visible++;
                maxi = ans[i];
            }
        }
        
        maxi = 0;
        
        for(int i = n-1;i >= 0; i--){
            if(ans[i] > maxi){
                visible++;
                maxi = ans[i];
            }
        }
        
        int k = visible;
        
        if(count(a.begin(),a.end(),a[n-1]) == 1){
            k--;
        }
        
        cout<< k << endl;
        
        for(int x: ans){
            cout<<x<< " ";
        }
        
        
    }
    return 0;
}