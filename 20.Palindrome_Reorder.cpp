// https://cses.fi/problemset/task/1755

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count[26]{0};
    int len = s.size();
    for(int i = 0; i < len; i++){
        count[s[i] - 'A']++;
    }
    int odd_count = 0;
    int  odd_idx = 0;
    for(int i = 0; i < 26; i++){
        if( count[i] % 2 == 1){
            odd_count++;
            odd_idx = i;
        }
    }
    string s1 = "", s2="";
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < count[i]/2; j++){
            s1+=(char)(i + 'A');
        }
    }

    for(int i = 25; i >= 0; i--){
        for(int j = 0; j < count[i]/2; j++){
            s2+=(char)(i + 'A');
        }
    }

    if( odd_count > 1){
        cout << "NO SOLUTION\n";
    }
    else{
        if( len % 2 == 1)
        s1+= (char)(odd_idx + 'A');
        cout << s1  << s2<< "\n";
    }





}