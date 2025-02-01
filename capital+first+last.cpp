#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string solve(string &s){
    int n=s.length();
    s[0]=toupper(s[0]);
    s[n-1]=toupper(s[n-1]);
    return s;
}
string capital(string &s){
  
    stringstream split(s);
    string ans="";
    string word="";
    while(split >> word){
        //if (ans != "") ans += " ";
        ans=ans+" " +solve(word);
    }
    return ans;
}


int main() {
    string s;
    getline(cin, s);  // Use getline to capture the full string with spaces
    cout << capital(s) << endl;
    return 0;
}
