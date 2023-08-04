// https://cses.fi/problemset/task/1069
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.size();
    int max = 0;
    int curr = 1;
    for(int i = 1; i < len; i++){
        if(s[i] == s[i-1]){
            curr++;
        }
        else{
            if(max < curr){
                max = curr;
            }
            curr = 1;
        }
    }
    if( max < curr){
        max = curr;
    }
    cout << max << "\n";
}