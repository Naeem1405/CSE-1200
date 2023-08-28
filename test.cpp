#include<bits/stdc++.h>
using namespace std;

int ans(string text, string word){
    int c = 0;
    for(int i = 0; i < text.size() ;  ){
        string s = "";
        while(text[i] != ' ' && i < text.size()){
            s+= tolower(text[i]);
            i++;
        }
        if( s == word){
            c++;
        }
        while(text[i] == ' ' && i < text.size()){
        i++;
        }
    }
    return c;
}

int main(){
    string word, text;
    cin >> word;
    cin.ignore();
    getline(cin, text, '\n');
    int count = 0;
    while(text != "END_OF_TEXT"){
        count += ans(text, word);
        getline(cin, text, '\n');
    }
    cout << count << "\n";
}