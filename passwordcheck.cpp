#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    if(s.length()<4){
        return false;
    }
    if(isdigit(s[0])){
        return false;
    }
    bool onedigit=false;
    bool capital=false;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '|| s[i]=='/'){
            return false;
        }
        if(isdigit(s[i])){
            onedigit=true;
        }
        if(isupper(s[i])){
            capital=true;
        }
    }
    if(onedigit && capital){
        return true;
    }
    else
    return false;
}
int main(){
    string password="";
    bool ans=check(password);
    cout<<ans;
    
}
