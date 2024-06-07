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
