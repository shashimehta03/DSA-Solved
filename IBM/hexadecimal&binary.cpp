#include<bits/stdc++.h>
using namespace std;
string toDecimal(string &s){
    int n=s.length();
    long ans=0;
    for(int i=0;i<n;i++){
        int a=0;
        if(s[i]>='0' && s[i]<='9'){
            a=s[i]-'0';
        }
        else if(s[i]>='A' && s[i]<='F'){
            a=s[i]-'A' + 10;
        }
        else if(s[i]>='a' && s[i]<='f'){
            a=s[i]-'a' + 10;
        }
        ans+= a *pow(16 , n-i-1);
    }
    return to_string(ans);
}
string toBinary(int n){
    string ans="";
    while(n!=0){
        int a=n%2;
        ans+=a+'0';
        n/=2;
        
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    string s="1AB";
    string ans=toDecimal(s);
    cout<<"decimal"<<ans<<endl;
    string binary=toBinary(stoi(ans));
    cout<<"binary "<<binary<<endl;
}
