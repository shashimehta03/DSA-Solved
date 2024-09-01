#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> &v, int k){
    int i=0;
    int n=v.size();
    int j=0;
    int sum=0;
    vector<int> ans;
    while(j<n){
        sum+=v[j];
        while(sum>k && i<=j){
            sum-=v[i];
            i++;
        }
        if(sum==k){
            for(int k=i;k<=j;k++)
            ans.push_back(v[k]);
            return ans;
        }
        
        j++;
    }
    return ans;
}
int main(){
    int k=40;
    std::vector<int> v={1,2,4,5,6,15,10,11,23};
    vector<int> ans=solve(v,k);
    if(ans.empty()){
        cout<<"no sub array"<<endl;
    }
    else{
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
}
