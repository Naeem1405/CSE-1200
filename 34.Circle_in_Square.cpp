// https://lightoj.com/problem/circle-in-square

#include<bits/stdc++.h>
using namespace std;

// #define pi 2 * acos(0.0);

int main(){
    double pi = 2*acos(0);
    int t;
    cin >> t;
    for(int i = 1; i <=t; i++){
        double r;
        cin >> r;
        cout <<"Case " << i << ": " << fixed << setprecision(2) << (4*r*r) - (pi * r * r) + 1e-9 << "\n";

    }
}