// https://atcoder.jp/contests/abc125/tasks/abc125_c

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long arr[n];
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }
    long long f[n], b[n];
    f[0] = arr[0];
    b[n-1] = arr[n-1];
    for(int i = 1, j = n-2; i < n; i++, j--){
        f[i] = __gcd(arr[i], f[i-1]);
        b[j] = __gcd(arr[j] , b[j+1]);
    }
    long long f_ans = 0;
    for(int i = 0; i < n; i++){
        long long ans;
        if( i == 0){
            ans = b[i+1];
        }
        else if(i == n-1){
            ans = f[i-1];
        }
        else{
            ans = __gcd(f[i-1], b[i+1]);
        }
        f_ans = max(ans, f_ans);
    }
    cout << f_ans << "\n";
}