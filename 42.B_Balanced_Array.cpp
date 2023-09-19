#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if( n % 4 != 0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            int even_sum = 0;
            for(int i =1; i <= n/2; i++){
                cout << i * 2 << " ";
                even_sum += ( i * 2);
            }
            // cout << "\nsum: " << sum << "\n";
            int odd_sum = 0;
            for(int i =0; i <(n/2 - 1); i++){
                cout <<  1 + (i*2) << " ";
                odd_sum+=  (1 + (i*2));
            }
            cout << even_sum - odd_sum << "\n";
        }
    }
    
}