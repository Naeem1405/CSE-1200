//  https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z

#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,s;
    cin >> k >> s;
    int count = 0;
    for(int i = 0; i <= k; i++){
        for(int j = 0; j <= k; j++){
            if(i + j > s){
                break;
            }
            else if( s - ( i + j) <= k){
                count++;
            }    
        }
    }
    cout << count << "\n";
}