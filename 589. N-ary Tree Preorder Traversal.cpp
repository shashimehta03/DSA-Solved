class Solution {
public:
vector<int> solve(Node *root, vector<int> &ans){
    if(root!=NULL){
        ans.push_back(root->val);
        for(Node *child:root->children){
            solve(child ,ans);
        }

    }
    return ans;
}
    vector<int> preorder(Node* root) {
        vector<int> ans;
        solve(root,ans);
        return ans;
    }
};
