//  https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a, b,c;
    cin >> a >> b >> c;
    int arr[3] = {a,b,c};
    sort(arr, arr + 3);
    for(int i = 0; i < 3; i++){
        cout << arr[i] << "\n";
    }
    cout <<"\n" << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
}