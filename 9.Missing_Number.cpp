//https://cses.fi/problemset/task/1083

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n + 10]{0};
    for(int i = 1; i < n; i++){
        int x ;
        cin >> x;
        arr[x]++;
    }
    for(int i = 1; i <=n; i++){
        if(arr[i] == 0){
            cout << i << "\n";
            break;
        }
    }
}