#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool is_int = true;
    int dot_idx = -1;
    int len = s.size();
    for(int i = 0; i < len; i++){
        if(s[i] == '.'){
            dot_idx = i;
            break;
        }
    }
    if( dot_idx == -1){
        cout << "int " << s << "\n";
        // return;
    }
    else{
        for(int i = dot_idx + 1; i < len; i++ ){
            if(s[i] != '0'){
                is_int = false;
                break;
            }
        }
    }
    if(is_int == true){
        cout << "int ";
        for(int i = 0; i < dot_idx; i++){
            cout << s[i];
        }
        cout << "\n";
    }
    else{
        cout << "float ";
        for(int i = 0; i < dot_idx; i++){
            cout << s[i];
        }
        cout << " 0";
        for(int i = dot_idx; i < len; i++){
            cout <<  s[i];
        }
        cout << "\n";
    }

}