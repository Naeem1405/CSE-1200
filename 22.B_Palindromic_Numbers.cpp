// https://codeforces.com/problemset/problem/1700/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int len;
        cin >> len;
        string num;
        cin >> num;
        string ans = "";
        if( num[0] != '9'){
            for(int i = 0; i < len;i++){
                ans += (9 - (num[i] - '0')) + '0';
            }
        }
        else{
            // cout << "ELSE\n";
            int carry = 0;
            for(int i = len-1;i >=0; i--){
                
                int x = (num[i]  - '0');
                x += carry;
                if( x > 1){
                    ans += ((11 - x) + '0');
                    carry = 1;
                }
                else{
                    ans += ((1 - x) + '0');
                    carry = 0;
                }
            }
            reverse(ans.begin(), ans.end());
        }
        cout << ans << "\n";

    }
}