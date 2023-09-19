#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long arr[n];
    for(int i = 0;i  < n; i++){
        cin >> arr[i];
    }
    long long ans = arr[0];
    for(int i = 1;i < n; i++){
        ans = (ans * arr[i]) / (__gcd(ans, arr[i]));
    }
    cout << ans << "\n";
}