class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        return 0;
        queue<TreeNode *> q;
        q.push(root);
        int ans=0;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode *temp=q.front();
                q.pop();
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
                if(temp->left!=NULL){
                    q.push(temp->left);
                }

            }
             ans++;

        }
        return ans;
    }
};
