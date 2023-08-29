#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "51";
    string a;
    a += s[0] - '0';
    a += (11 - (s[1] - '0')) + '0';

    cout <<a << "\n";

}