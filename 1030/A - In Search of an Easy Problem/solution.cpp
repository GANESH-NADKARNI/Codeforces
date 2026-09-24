#include <iostream>
using namespace std;
 
int main(){
    int n,i,ones = 0;
    cin>>n;
    
    while(n--){
        cin>>i;
        
        if(i == 1){
            ones++;
        }
    }
    
    if(ones){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    
    return 0;
}