#include<bits/stdc++.h>
using namespace std;
string solve(string &s){
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            s[i]='b';
        }
        else if(s[i]=='b'){
            s[i]='a';
        }
    }
    return s;
}
int main(){
    string s="abaabbcc";
    string ans=solve(s);
    cout<< ans<<endl;
}
