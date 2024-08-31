#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int n){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    for(int i=2;i<=n;i++){
        int temp=v[i-1]+ v[i-2];
        v.push_back(temp);
        
        
    }
    return v;
}
int main(){
    int n;
    cin>>n;
    std::vector<int> v= solve(n);
    for(int  i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
