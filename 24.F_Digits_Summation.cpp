// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

#include<bits/stdc++.h>
using namespace std;

int main(){
    string num1, num2;
    cin >> num1 >> num2;
    int x = num1[num1.size() - 1] - '0';
    int y = num2[num2.size() - 1] - '0';
    cout << x + y << "\n";
}