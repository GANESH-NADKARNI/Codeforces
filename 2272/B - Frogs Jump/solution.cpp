#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count = 0;
        cin>>n;
        
        string s1,s2;
        cin>>s1>>s2;
        
        for(int i = 0;i < n; i++){
            if(s1[i] == 'f'){
                count++;
            }
            if(s2[i] == 'f'){
                count++;
            }
            
        }
        
        cout<< (count%2)<<endl;
    }
    return 0;
}