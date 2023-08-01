//https://cses.fi/problemset/task/1094

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long arr[n + 10];
    arr[0] = 0;
    long long ans = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if( arr[i] < arr[i-1]){
            long long int x = arr[i - 1] - arr[i ];
            
            ans += ( x  );
            arr[i] += ( x );
        }
    }

    cout << ans << "\n";

}

