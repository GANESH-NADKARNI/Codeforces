#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main(){
    string s, Target = "hello";
    cin >> s;
    int j = 0;
    
    for(int i = 0; i < s.size() && j < Target.size(); i++){
        if(s[i] == Target[j]){
            j++;
        }
}
    if(j == Target.size()){
        cout << "YES
";
    }
    else{
        cout << "NO
";
    }
    return 0;
}