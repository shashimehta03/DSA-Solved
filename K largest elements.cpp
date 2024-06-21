#include<bits/stdc++.h>
#include<set>
using namespace std;
int solve(vector<int> v,int n, int large){
    std::set<int>se(v.begin(),v.end());
     v.clear();
     v.assign(se.begin(),se.end());
     if(v.size()<large){
         return -1;
     }
     return v[large-1];
}
int main(){
    int n;
    vector<int> v;
    int large;
    cin>>n;
    cin>>large;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int ans=solve(v,n,large);
    cout<<ans<<endl;
    return 0;
    
}
