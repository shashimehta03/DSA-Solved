#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> &v , int rotate){
    vector<int> ans;
    for(int i=v.size()-rotate;i<v.size();i++){
        ans.push_back(v[i]);
        
    }
    for(int i=0;i<v.size()-rotate;i++){
        ans.push_back(v[i]);
    }
    return ans;
    
}
int main(){
    vector<int>v={1,2,3,4,5};
    int rotate=3;
    vector<int> ans =solve(v, rotate);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
