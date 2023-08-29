// https://cses.fi/problemset/task/1141

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n ;i++){
        cin >> arr[i];
    }
    int ans = 0;
    set<long long>st;

    int i = 0, j = 0;
    while(i < n && j < n){
        while(j < n && !st.count(arr[j])){
            st.insert(arr[j]);
            ans = max(ans , j - i + 1);
            j++;
        }
        while(j < n && st.count(arr[j])){
            st.erase(arr[i]);
            i++;

        }
    }
    cout << ans << "\n";
}