#include<bits/stdc++.h>

using namespace std;


long long exp(long long x, long long y){
    long long mod = 1000000007;
    long long ans = 1;
    long long power = x;

    while(y > 0){
        if( y & 1){
            ans = ((ans % mod) * (power % mod) ) % mod;
        }  
        power = (power * power) % mod;
        y = y >> 1; 
        
    }
    return ans;
}


int main(){
    long long m,n;
    cin >> m >> n;
    long long ans = exp(m,n);
    cout << ans << "\n";
    
}