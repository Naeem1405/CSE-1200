#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    double x , y;
    x = b * log(a);
    y = d * log(c);
    if( x > y){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}