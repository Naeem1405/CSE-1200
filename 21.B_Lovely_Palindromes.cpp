//https://codeforces.com/problemset/problem/688/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.size();
    for(int i = len-1; i >=0; i--){
        s+= s[i];
    }
    cout << s << "\n";
}