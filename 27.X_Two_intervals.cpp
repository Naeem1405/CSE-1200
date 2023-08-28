#include<bits/stdc++.h>
using namespace std;

void print(int x,int y){
    cout << x << " " << y << "\n";
}

int main(){
    long long a, b , c,d;
    cin >> a >> b >> c >> d;
    if( (a < c && b < c) || (c < a && d < a)){
        cout << "-1\n";
    }
    else if(a <= c){
        if( b <= d){
            print(c,b);
        }
        else{
            print(c,d);
        }
    }
    else{
        if( b >= d){
            print(a,d);
        }
        else{
            print(a,b);
        }
    }
    
}