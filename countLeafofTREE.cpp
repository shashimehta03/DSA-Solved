int solve(BinaryTreeNode<int> *root) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL) {
        return 1;
    }

    int leftLeaf = solve(root->left);
    int rightLeaf = solve(root->right);
    return leftLeaf + rightLeaf;
}

int noOfLeafNodes(BinaryTreeNode<int> *root) {
    return solve(root);
}
