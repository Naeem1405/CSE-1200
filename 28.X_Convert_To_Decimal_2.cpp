#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin  >> n;
        int count = 0;
        while( n != 0){
            count += ( n % 2);
            n = n / 2;
        }
        long long ans = 0;
        for(int i = 0; i < count; i++){
            ans += pow(2,i);
        }
        cout << ans << "\n";
    }
}