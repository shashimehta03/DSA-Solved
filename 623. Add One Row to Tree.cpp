class Solution {
public:
TreeNode *solve(TreeNode *root,int val,int depth){
    queue<TreeNode*> q;
    q.push(root);
    int level=1;
    while(!q.empty()){
        int count=q.size();
        while(count-->0){
            TreeNode *rem=q.front();
            q.pop();
            if(level==depth-1){
                TreeNode *left=rem->left;
                TreeNode *right=rem->right;
                rem->left=new TreeNode(val);
                rem->right=new TreeNode(val);
                rem->left->left=left;
                rem->right->right=right;
            }
            else{
                if(rem->left!=NULL){
                    q.push(rem->left);
                }
                if(rem->right!=NULL){
                    q.push(rem->right);
                }
            }
        }
        level++;
    }
    return root;
}
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode *newRoot=new TreeNode(val);
            newRoot->left=root;
            return newRoot;
        }
        return solve(root,val,depth);
    }
};
