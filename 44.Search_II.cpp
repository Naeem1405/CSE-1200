// https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_4_B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n;
    long long arr1[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    cin >> q;
    int arr2[q];
    for(int i = 0; i < q; i++){
        cin >> arr2[i];
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + q);

    int count = 0;
    for(int i = 0 , j = 0; j < q;){
        if( arr1[i] == arr2[j]){
            count++;
            i++;
            j++;
            while(arr1[i] == arr1[i-1]){
                i++;
            }
            while(arr2[j] == arr2[j-1]){
                j++;
            }
        }
        else if ( arr1[i] < arr2[j] ){
            i++;
        }
        else{
            j++;
        }
    }
    cout << count << "\n";

    
}