#include<bits/stdc++.h>
using namespace std;
string solve(string &s){
    sort(s.begin(),s.end());
    int n=s.length();
    string out="";
    for(int i=0;i<n;i++){
        char c=s[i];
        int count=1;
        while(i<n && s[i+1]==c){
            count++;
            i++;
        }
        out+=c;
        if(count>1){
          out+=to_string(count);
        }
        
    }
    return out;
}
int main(){
    string s;
    cin>>s;
    string ans=solve(s);
    cout<<ans;
    
    
}

