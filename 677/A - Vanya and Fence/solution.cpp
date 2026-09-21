#include <iostream>
using namespace std;
 
int main(){
    int n,h,count = 0,i;
    
    cin>> n >> h;
    
    while(n--){
        cin >> i;
        
        if(i <= h){
            count++;
        }
        else{
            count += 2;
        }
    }
    cout<< count;
    return 0;
    
}