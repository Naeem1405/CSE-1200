// https://atcoder.jp/contests/abc165/tasks/abc165_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x, diff, n = 100;;
    cin >> x ;
    diff = x - n;
    int ans = 0;
    while(n < x){
        n += n / 100;
        ans++;
    }
    cout << ans << "\n";

}