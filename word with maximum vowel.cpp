#include<bits/stdc++.h>
using namespace std;
int count(string &s){
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u'){
            cnt++;
        }
    }
    return cnt;
}
string solve(string &s){
    
    stringstream ss(s);
    string Subword="";
    int maxVowel=INT_MIN;
    string ans="";
    string word="";
    while(ss>>word){
        int vowel=count(word);
        if(vowel>maxVowel){
            maxVowel=vowel;
            ans=word;
        }
    }
    return ans;
    
}
int main(){
    string s;
    getline(cin,s);
    cout<<solve(s);
    
}
