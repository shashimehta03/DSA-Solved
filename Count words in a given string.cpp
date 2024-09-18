#include<bits/stdc++.h>
using namespace std;
int solve(string &s){ //way1
    int n=s.length();
    int i=0;
    int sum=0;
    for(int i=0;i<n;i++){
        while(i<n && s[i]!=' '){
            i++;
        }
        sum++;
    }
    return sum;
    
}
int solve2(string &s){ //way2
    int n=s.length();
    std::vector<string> v;
    string str;
    for(int i=0;i<n;i++){
        
        while(s[i]!=' '){
            str+=s[i];
            i++;
        }
        v.push_back(str);
        str=' ';
    }
    return v.size();
}
int main(){
    string s="asdf ashdjk fghj dfghj dfghj sdfghj sdfghjk";
    int ans=solve(s);
    int ans2=solve2(s);
    cout<<ans<<endl;
    cout<<ans2;
}
