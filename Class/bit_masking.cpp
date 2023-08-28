#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x, y;
    // cin >> x >> y;
    x = 2, y = 447;
    long long mod = 1000000007;
    // int mod = 18;
    long long mod_ans = 1;

    // x = 5, y = 5;
    long long ans = 1;
    long long power = x;

    while(y > 0){
        if( y & 1){
            // ans = ans * power;
            ans = ((ans % mod) * (power % mod) ) % mod;
            // ans = (ans * power) % mod;
            // cout << power << "\n";
     
            // cout << ans << "\n";
        }  
        power = (power * power) % mod;
        y = y >> 1; 
        
        // cout << power << "\n";
        // cout << ans << "\n";
        // cout <<
        // cout << y << "\n";
    }
    // x = 2, y = 447;
    // cout << (int)pow(x,y) % mod << "\n";
    cout << ans << "\n";
}