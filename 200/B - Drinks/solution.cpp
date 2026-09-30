#include <iostream>
using namespace std;
 
int main(){
    int n, a;
    double sum = 0;
    cin >> n;
    int d = n;
    
    
    while(n--){
        cin >> a;
        sum += a;
    }
    
    cout << (sum / d);
    
    return 0;
}