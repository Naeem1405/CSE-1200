// https://www.hackerrank.com/challenges/strong-password/problem

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    string special_characters = "!@#$%^&*()-+";
    int len = password.size();
    int req =  4;
    bool digit = false;
    bool lower = false;
    bool upper = false;
    bool special = false;
    for(int i = 0; i < len ;i++){
        if(password[i] >= '0' && password[i] <= '9'){
            digit = true;
        }
        if(password[i] >= 'a' && password[i] <= 'z'){
            lower = true;
        }
        if(password[i] >= 'A' && password[i] <= 'Z'){
            upper = true;
        }
        for(int j = 0; j < special_characters.size(); j++){
            if( password[i] == special_characters[j]){
                special = true;
            }
        }

    }
    if( digit == true){
        req--;
    }
    if(lower == true){
        req--;
    }
    if(upper == true){
        req--;
    }
    if(special == true){
        req--;
    }
    int ans = req;
    if( len + req <6){
        ans += (6-(len + req));
    }
    // cout << ans << "\n";
    return ans;
    


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
