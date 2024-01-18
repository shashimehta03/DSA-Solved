class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root==NULL)
        return v;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int> vs;
            for(int i=0;i<s;i++){
                TreeNode *node =q.front();
                q.pop();
                if(node->left!=NULL)
                q.push(node->left);
                if(node->right!=NULL)
                q.push(node->right);
                vs.push_back(node->val);
            }
            v.push_back(vs);
        }
        return v;

        
    }
};
