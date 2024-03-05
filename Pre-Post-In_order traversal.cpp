//PostOrder  Left->right->root
#include <bits/stdc++.h> 
void solve(TreeNode *root, vector<int> &v){
    if(root!=NULL){
        solve(root->left,v);
        solve(root->right,v);
        v.push_back(root->data);
    }
}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;
    solve(root,ans);
    return ans;
}
//PreOrder root->left->right
#include <bits/stdc++.h> 
void solve(TreeNode *root, vector<int> &v){
    if(root!=NULL){
        v.push_back(root->data);
        solve(root->left,v);
        solve(root->right,v);
    }
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;
    solve(root,ans);
    return ans;
}
//InOrder left->root->right
void solve(TreeNode *root, vector<int> &ans){
    if(root!=NULL){
        solve(root->left,ans);
        ans.push_back(root->data);
        solve(root->right,ans);
    }
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> v;
    solve(root, v);
    return v;

}
