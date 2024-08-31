#include<bits/stdc++.h>
using namespace std;
bool solve(string s, string l){
    sort(s.begin(),s.end());
    sort(l.begin(),l.end());
    return s==l;
}
int main(){
    string s="asdfghjkl";
    string l="lkjhgfdya";
    bool ans=solve(s,l);
    cout<<ans;
    
}
