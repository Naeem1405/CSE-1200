// https://codeforces.com/problemset/problem/318/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n,k;
    cin >> n >> k;
        long long idx;
    if( k <= (n+1)/2){
        idx =   (k * 2) - 1;
    }
    else{
        idx =   (k - ((n+1)/2) ) * 2;
    }
    cout << idx;
}