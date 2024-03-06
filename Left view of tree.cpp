#include <bits/stdc++.h> 

void solve(TreeNode<int> *root , vector<int> &ans,int level){
    if(root==NULL)
    return;
    if(ans.size()==level)
    ans.push_back(root->data);
    solve(root->left,ans,level+1);
    solve(root->right,ans,level+1);
}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int> ans;
    solve(root,ans,0);
    return ans;
}
