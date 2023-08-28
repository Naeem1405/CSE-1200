// https://cses.fi/problemset/task/1617/


#include<bits/stdc++.h>
using namespace std;

long long exp(int x, int y){
    int mod = 1000000007;
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
    long long n;
    cin >> n;
    long long ans = exp(2,n);
    cout << ans << "\n";
}