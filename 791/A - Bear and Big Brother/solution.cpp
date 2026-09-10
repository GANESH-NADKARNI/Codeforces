#include <iostream>
using namespace std;
 
int main(){
    int a , b, ans;
    
    cin>> a >> b;
    
    while(a*3 <= b*2){
        a *= 3;
        b *= 2;
        ans++;
    }
    
    cout<< (ans+1);
    
    return 0;
}