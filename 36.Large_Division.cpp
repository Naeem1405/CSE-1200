#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int k = 1; k <= t;k++){
        string n;
        cin >> n;
        long long div;
        cin >> div;
        long long remainder = 0;
        for(int i = 0;i < n.size(); i++){
            if( i == 0 && n[i] == '-'){
                i++;
            }
            remainder = (remainder*10) + (n[i] - '0');
            remainder = remainder % div;
        }
        if( remainder == 0){
            cout <<"Case " << k << ": divisible\n";
        }
        else{
            cout << "Case " << k <<": not divisible\n";
        }
    }
}