// class Solution {
// public:
//     bool isValidBST(TreeNode* root) {
//         if(root==NULL)
//         return true;
//         if(root->left!=NULL && root->left->val >= root->val){
//             return false;
//         }
//         if(root->right!=NULL&& root->right->val <= root->val){
//             return false;
//         }
//         return isValidBST(root->left)&& isValidBST(root->right);
//     }
// };//this solution is valid for some testcase 
class Solution {
public:
bool bstcheck(TreeNode *root, long long lower, long long upper){
     if(root==NULL)
        return true;
        if(root->val<=lower || root->val >= upper){
            return false;
        }
        return bstcheck(root->left,lower,root->val) && bstcheck(root->right,root->val,upper);

}
    bool isValidBST(TreeNode* root) {
        return bstcheck(root, LONG_MIN, LONG_MAX);
    }
};
