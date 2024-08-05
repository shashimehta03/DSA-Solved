#include<bits/stdc++.h>
using namespace std;
int solve(string &s){
    int len=s.length();
    int ans;
    for(int i=0;i<len;i++){
        if(s[len-1-i]=='1')
        ans+=pow(2,i);
    }
    return ans;
}
int main(){
    string s="1101";
    int ans=solve(s);
    cout<<ans<<" ";
    
}
