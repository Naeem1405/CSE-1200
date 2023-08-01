// https://www.codechef.com/problems/ZOZ

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k, sum = 0;
        cin >> n >> k;
        long long arr[n];
        
        for(int i = 0; i < n;i++){
            cin >> arr[i];
            sum += arr[i];
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if((arr[i] + k) > (sum - arr[i])){
                count++;
            }
        }
        cout << count << "\n";
    }
}