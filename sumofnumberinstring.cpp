#include<bits/stdc++.h>
using namespace std;
int solve(string &s){
    int sum=0;
    	for(int i=0;i<s.length();i++){
    	    string digitstr="";
    	     while(isdigit(s[i])){
    	         digitstr+=s[i];
    	         i++;
    	     }
    	     if(!digitstr.empty())
    	     sum+=stoi(digitstr);
    	}
    	return sum;
}
int main(){
    string s="9abc22c";
    int ans=solve(s);
    cout<<ans<<endl;
    
}
