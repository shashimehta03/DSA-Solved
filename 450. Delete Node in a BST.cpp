class Solution {
public:
TreeNode* minValue(TreeNode *node){
    TreeNode* current = node;
    
    // Loop to find the leftmost leaf
    while (current && current->left != NULL) {
        current = current->left;
    }
    
    return current;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL)
            return root;
        if (root->val == key) {
            // 0child case
            if (root->left == NULL && root->right == NULL) {
                delete root;
                return NULL;
            }
            // 1 child
               // left
            if (root->left != NULL && root->right == NULL) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
               // right
            if (root->right != NULL && root->left == NULL) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            // 2 child
            if (root->left != NULL && root->right != NULL) {
                int mini = minValue(root->right)->val;
                root->val = mini;
                root->right = deleteNode(root->right, mini);
                return root;
            }

        } 
        else if (root->val > key) {
            root->left = deleteNode(root->left, key);
            return root;
        } 
        else {
            root->right = deleteNode(root->right, key);
            return root;
        }
        return root;
    }
};
