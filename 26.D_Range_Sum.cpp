// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        unsigned long long a ,b,sum1,sum2,sum;
        cin >> a >> b;
        
        if( a >= b){
            b--;
            sum1 = (b*(b+1))/2;
            sum2 = (a*(a+1))/2;
            sum = sum2 - sum1;

        }
        else{
            a--;
            sum2 = (b*(b+1))/2;
            sum1 = (a*(a+1))/2;
            sum = sum2 - sum1;
        }
        
        cout << sum << "\n";
    }
}
