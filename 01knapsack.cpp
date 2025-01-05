#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&val,vector<int>&wt,int maxCap,int n){
    if(maxCap==0 || n==0) return 0;
    if(maxCap<wt[n-1]){
        return solve(val,wt,maxCap,n-1);
    }
    return max(val[n-1]+solve(val,wt,maxCap-wt[n-1],n-1),
    solve(val,wt,maxCap,n-1)
    
    );
}
int dpsolve(vector<int>&val,vector<int>&wt,int maxCap,int n){
     if(maxCap==0 || n==0) return 0;
     vector<vector<int>>dp(n+1,vector<int>(maxCap+1,0));
     for(int i=1;i<=n;i++){
         for(int j=0;j<=maxCap;j++){
             if(wt[i-1]<=j){
                 dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
             }
             else{
                 dp[i][j]=dp[i-1][j];
             }
         }
     }
     return dp[n][maxCap];
}
int main(){
    std::vector<int>val={25,10,15};
    vector<int>wt={1,1,1};
    int maxCap=2;
    int ans=dpsolve(val,wt,maxCap,val.size());
    int res=solve(val,wt,maxCap,val.size());
    cout<<ans<<"->dp == recurive<- "<<res<<endl;
}
