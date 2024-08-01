#include<bits/stdc++.h>
using namespace std;
string solve(string s, char chr1 , char chr2){
    for(int i=0;i<s.length();i++){
        if(s[i]==chr1){
            s[i]=chr2;
        }
        else if(s[i]==chr2){
            s[i]=chr1;
        }
    }
    return s;
}
int main(){
    string s="apple";
    char chr1='a';
    char chr2='p';
    string ans=solve(s,chr1,chr2);
    cout<<ans<<endl;
    
    
}
