// approch 1 for some testcases
class Solution {
public: 
int height(TreeNode *root){
    if(root==NULL){
        return 0;

    }
    int LH=height(root->left);
    int RH=height(root->right);
    return max(LH,RH)+1;
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int Left=height(root->left);
        int Right=height(root->right);
        if((Left-Right)<=1){
            return true;
        }
        return false;
    }
};
approch 2 for all the test cases
class Solution {
public: 
int height(TreeNode *root){
    if(root==NULL){
        return 0;

    }
    int LH=height(root->left);
    int RH=height(root->right);
    return max(LH,RH)+1;
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        bool diff= abs(height(root->left)-height(root->right))<=1;
        if(left && right && diff)
        return true;
        return false;
    }
};
approch 3
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    pair<bool ,int> isBalancedfast(Node *root){
    if(root==NULL){
        pair<bool,int> p =make_pair(true,0);
        return p;
    }
    pair<bool,int> left=  isBalancedfast(root->left);
    pair<bool,int> right=  isBalancedfast(root->right);
    bool leftans=left.first;
    bool rightans=right.first;
    bool diff=abs(left.second-right.second)<=1;
    pair<bool, int> ans;
    ans.second=max(left.second,right.second)+1;
    if(leftans&& rightans&& diff)
    ans.first=true;
    else
    ans.first=false;
    return ans;
    
}
    bool isBalanced(Node *root)
    {
       isBalancedfast(root).first;
    }
};
