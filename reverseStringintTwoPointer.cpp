#include<bits/stdc++.h>
using namespace std;
string solve(string &s){
    int n=s.length();
    int i=0,j=n-1;
    while(i<j){
        // swap(s[i],s[j]);
        // i++;
        // j--;
        int temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
        
    }
    return s;
}
int main(){
    string s;
    cin>>s;
    string ans=solve(s);
    cout<<ans;
    
    
}

