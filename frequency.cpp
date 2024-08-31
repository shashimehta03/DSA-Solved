#include<bits/stdc++.h>
using namespace std;
void solve(string s){
    unordered_map<char,int> mp;
    for (char c:s){
        mp[c]++;
    }
    int i=0;
    while(i<s.length()){
        cout<< "char   "<<s[i]<<"    frequency"<<mp[s[i]]<<endl;
        i+=mp[s[i]];
        
    }
}
int main(){
    string s="aaassdddfffjiwkkk";
    solve(s);
    return 0;
}
