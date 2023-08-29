// https://cses.fi/problemset/task/1622

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string>p;
    do{
        p.push_back(s);

    }
    while (next_permutation(s.begin(),s.end()));
    int len = p.size();
    cout << len << "\n";
    for(int i=0; i < len; i++){
        cout << p[i] << "\n";
    }
}