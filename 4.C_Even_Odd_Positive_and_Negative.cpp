//  https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int even_count= 0, odd_count = 0, pos_count = 0, neg_count = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] >0){
            pos_count++;
        }
        else if ( arr[i] < 0){
            neg_count++;
        }
        if(arr[i] % 2 == 0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    cout << "Even: " << even_count << "\n";
    cout << "Odd: " << odd_count << "\n";
    cout << "Positive: " << pos_count << "\n";
    cout << "Negative: " << neg_count << "\n";
}