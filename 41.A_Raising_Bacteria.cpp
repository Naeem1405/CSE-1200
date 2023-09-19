#include<bits/stdc++.h>
using namespace std;

long long solve(long long n){
    if( n == 0){
        return 0;
    }
    long long ans = 1, m = 1,temp = 0;
    if( n % 2 == 1 && n != 1){
        n--;
        ans++;
    }    
    while(m <= n){
        temp = m;
        m*=2;
    }
    n = n - temp;
    ans += solve(n);
    return ans;
}

int main(){
    long long n;
    cin >> n;
    long  long ans = 0;
    
    ans = solve(n);
    cout << ans << "\n";
}