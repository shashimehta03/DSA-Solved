class Solution {
public:
    void preorder(TreeNode* node, vector<int>& v) {
        if (node == NULL)
            return;
        v.push_back(node->val);
        preorder(node->left, v);
        preorder(node->right, v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        preorder(root, v);
        sort(v.begin(), v.end());
        return v[k - 1];
    }
};
// ways 2
class Solution {
public:
    void solve(TreeNode* node, int &cnt , int &ans, int k ) {
        if (node == NULL)
            return;
        solve(node->left,cnt,ans,k);
        cnt++;
        if(cnt==k){
            ans=node->val;
            return ;
        }
        solve(node->right,cnt,ans,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int cnt=0;
        int ans;
        solve(root,cnt,ans,k);
        return ans;
    }
};
