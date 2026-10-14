#include <iostream>
using namespace std;
 
int main(){
    int n,res = 0;
    cin>>n;
    
    if(n >= 100){
        res += n/100;
        n %= 100;
    }
    if(n>= 20){
        res += n/20;
        n %= 20;
    }
    if(n >= 10){
        res += n/10;
        n %= 10;
    }
    if(n >= 5){
        res += n/5;
        n %= 5;
    }
    if(n < 5){
        res += n;
    }
    
    cout << res;
    
    return 0;
    
}