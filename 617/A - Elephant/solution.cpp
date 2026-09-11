#include <iostream>
using namespace std;
 
int main(){
    int ans = 0, n;
    
    cin >> n;
    
    
    ans += n / 5;
    if(n % 5){
        ans++;
    }
    
    cout<< ans;
    
    return 0;
}