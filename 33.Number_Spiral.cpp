// https://cses.fi/problemset/task/1071/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long y,x,ans;
        cin >> y >> x;
        if( x >= y){
            if( x % 2 == 1){
                ans = (x*x) - y + 1;
            }
            else{
                ans = ((x - 1) * ( x - 1)) + 1 + y - 1;
            }
        }
        else{
            if( y % 2 == 0){
                ans = (y * y) - x + 1;
            }
            else{
                ans = ((y - 1) * (y - 1)) + 1 + x - 1;
            }
        }

        cout << ans << "\n";
    }
}