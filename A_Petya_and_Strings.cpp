#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >>s1 >>  s2;
    int len = s2.size();
    int ans = 0;
    for(int i = 0; i < len ;i++){
        char a = tolower(s1[i]);
        char b = tolower(s2[i]);
        // cout << a << b << "\n";
        if( a > b){
            ans = 1;
            break;
        }
        else if( a < b){
            ans = -1;
            break;
        }
        

    }
    cout << ans << "\n";
    

}