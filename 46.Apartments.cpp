// https://cses.fi/problemset/task/1084/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    long long k;
    cin >> n >> m >> k;
    long long x[n];
    long long y[m];
    for(int i = 0; i< n; i++){
        cin >> x[i];
    }

    for(int i = 0; i < m; i++){
        cin >> y[i];
    }
    sort(x, x + n);
    sort(y, y + m);
    int count = 0;
    int i = 0, j = 0;
    for(; i < n;){
        if( y[j] >= (x[i] - k) && y[j] <= (x[i] + k)){
            count++;
            i++;
            j++;
        }
        else if (x[i] > y[j]){
            j++;
        }
        else{
            i++;
        }
        if( j == m){
            break;
        }
    }

    cout << count << "\n";

}