#include<bits/stdc++.h>
using namespace std;
int solve(vector<char> &v, int n){
    int ans=0;
    for(int i=0;i<n;i++){
        if(v[i]=='S'){
            ans++;
        }
    }
    return ans;
}
int main(){
    int n=16;
    vector<char> v={'X','X','X','S','X','X','S','X','X','S','S','X','X','S','X','X'};
    int ans=solve(v,n);
    cout<< ans<<endl;
}
