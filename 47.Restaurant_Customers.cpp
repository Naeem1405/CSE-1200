// https://cses.fi/problemset/task/1619/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long arr[n][2];
    map<int, int> m;
    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
        m[arr[i][0]]++;
        m[arr[i][1]]--;
    }

    int ans = 0;
    int temp = 0;
    for(auto &pr : m){
        temp += pr.second;
        ans = max(ans, temp);
    }

    cout <<"\n" << ans << "\n";

}