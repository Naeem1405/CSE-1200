// https://codeforces.com/problemset/problem/1/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int m, n, a;
    cin >> m >> n >> a;
    int count = 0;
    long long int x = 0;
    long long int y = 0;
    x = (m / a);
    if(m % a != 0){
        x++;
    }
    y = (n / a);
    if(n % a != 0){
        y++;
    }
    cout << x * y << "\n";
        
}