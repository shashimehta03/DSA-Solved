#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(int n){
    string palindrome=to_string(n);
    for(int i=0;i<palindrome.length()/2;i++){
        if(palindrome[i]!=palindrome[palindrome.length()-1-i]){
            return false;
        }
    }
    return true;
}

int main(){
    int lower=100;
    int higher=800;
    vector<int> v;
    for(int i=lower;i<=higher;i++){
        if(checkpalindrome(i)){
            v.push_back(i);
        }
    }
    
    cout<<"output"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    
}
