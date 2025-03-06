#include<bits/stdc++.h>
using namespace std;
int usingSW(vector<int>&v,int k,int n,int ans){
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=v[i];
    }
    ans=min(ans,sum);
    for(int i=k;i<n;i++){
        sum+=v[i]-v[i-k];
        ans=min(ans,sum);
    }
    
    return ans;
}
int main(){
    vector<int>v{-2,10,1,3,2,-1,4,5};
    int k=3;
    int min=INT_MAX;
    int sum=0;
    int ans=usingSW(v,k,v.size(),ans);
     
    for(int i=0;i<v.size()-k;i++){
        for(int j=i;j<i+k;j++){
            sum+=v[j];
            
        }
        cout<<sum<<" ";
        if(sum<min){
            min=sum;
            
        }
        sum=0;
    }
    cout<<endl;
    cout<<"MIN"<<ans;
}
