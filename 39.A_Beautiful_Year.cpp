// https://codeforces.com/problemset/problem/271/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    bool found = false;
    while(!found){
        n++;
        s = to_string(n);
        int len = s.size();
        bool dup = false;
        for(int i = 0; i < len;i++){
            dup = false;
            for(int j = i+1;j< len; j++){
                if( s[i] == s[j]){
                    dup = true;
                    break;
                }
            }

            if( dup == true){
                break;
            }
        }

        if(dup == false){
            found = true;
        }

    }
    
    cout << s << "\n";
}