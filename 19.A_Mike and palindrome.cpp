//https://codeforces.com/contest/798/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.size();
    int remainder = len % 2; 
    int count = 0;
    for(int i = 0, j = len - 1; i < len/2; i++, j--){
        if( s[i] != s[j]){
            count++;
        }
    }
    // cout << "R " << remainder << "\n" << "c " << count  << "\n";

    if( count == 1){
        cout  << "YES\n";
    }
    else if( count == 0){
        if( remainder == 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    else{
        cout << "NO\n";
    }
}