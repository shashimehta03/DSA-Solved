class Solution {
public:
int  find(string &text1,int i,int n,char c){
    for(int j=i+1;j<n;j++){
        if(text1[j]==c){
            return j;
        }
    }
    return -1;
}
int  recursionSolve(string &text1,string &text2,int i,int j){
    if(text1.length()==i || text2.length()==j){
        return 0;
    }
    int ans=0;
    if(text1[i]==text2[j]){
        ans+=1+ recursionSolve(text1,text2,i+1,j+1);
    }
    else{
        ans+=max(recursionSolve(text1,text2,i+1,j),recursionSolve(text1,text2,i,j+1));
    }
    return ans;
}
int dpSolveUBM(string &text1,string &text2,int i, int j,vector<vector<int>>&dp){
    if(i==text1.length()||j==text2.length()){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans=0;
    if(text1[i]==text2[j]){
        ans+=1+dpSolveUBM(text1,text2,i+1,j+1,dp);
    }
    else{
        ans+=max(dpSolveUBM(text1,text2,i+1,j,dp),dpSolveUBM(text1,text2,i,j+1,dp));
    }
    return dp[i][j]=ans;
}
int dpSolve(string &a,string &b){
    int n=a.length();
    int m=b.length();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
   int ans=0;
   for(int i=n-1;i>=0;i--){
    for(int j=m-1;j>=0;j--){
        if(a[i]==b[j]){
            ans=1+dp[i+1][j+1];
        }
        else{
            ans=max(dp[i+1][j],dp[i][j+1]);
        }
         dp[i][j]=ans;
    }
   
   }
   return dp[0][0];
   
}
    int longestCommonSubsequence(string text1, string text2) {
        int n1=text1.length();
        int n2=text2.length();
        int last=-1;
        string matched="";
        for(int i=0;i<n2;i++){
            char c=text2[i];
            int pos=find(text1,last,n1,c);
            if(pos>=0){
                matched+=c;
                last=max(pos,last);
            }
        }
        vector<vector<int>>dp(n1,vector<int>(n2,-1));
        return dpSolve(text1,text2);// this is dp solution down to up using tabulization
        return dpSolveUBM(text1,text2,0,0,dp);//this is dp solution up down using memorization
        return recursionSolve(text1,text2,0,0);// this is for recurssive solution
        return matched.length(); // this is brute force solution

    }
};
