// https://cses.fi/problemset/task/1621/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int count = 0;
    for(int i = 0; i < n; ){
        count++;
        i++;
        while(arr[i] == arr[i-1] && i < n){
            i++;
        }
        // cout << i <<"\n";
    }
    cout << count << "\n";
}