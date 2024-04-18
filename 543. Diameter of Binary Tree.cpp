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

    int diameterOfBinaryTree(TreeNode* root) {
       if(root==NULL){
        return 0;
       }
       int LH=diameterOfBinaryTree(root->left);
       int RH=diameterOfBinaryTree(root->right);
       int d= height(root->left)+ height(root->right);
       int ans=max(d,max(LH,RH));
       return ans;
    }
};
// approach 2

class Solution {
    // private:
    // int height(Node *root){
    //     if(root==NULL){
    //         return 0;
    //     }
    //     int left=height(root->left);
    //     int right=height(root->right);
    //     return max(left,right)+1;
    // }
    
  public:
    // Function to return the diameter of a Binary Tree.
    pair<int, int> diameterfast(Node *root){
        if(root==NULL){
            pair<int,int> p=make_pair(0,0);
            return p;
        }
        pair<int, int> left=diameterfast(root->left);
        pair<int,int> right=diameterfast(root->right);
        int LD=left.first;
        int RD=right.first;
        int height=left.second+right.second+1;
        pair<int,int> ans;
        ans.first=max(height,max(LD,RD));
        ans.second=max(left.second,right.second)+1;
        return ans;
    }
    int diameter(Node* root) {
        // Your code here
        // if(root==NULL){
        //     return 0;
        // } // approch 1 support of maximums testcases
        // int LD=diameter(root->left);
        // int RD=diameter(root->right);
        // int D=height(root->left)+height(root->right)+1;
        // return max(D,max(LD,RD));
        
        return diameterfast(root).first;
    }
};
