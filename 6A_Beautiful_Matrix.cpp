#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n  = 5;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int i_idx,j_idx;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 1){
                i_idx = i;
                j_idx = j;
                break;
            }
        }
    }
 
    int moves = abs(2-i_idx) + abs(2-j_idx);
    cout << moves << "\n";
 
 
}