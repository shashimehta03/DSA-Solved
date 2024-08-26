class Solution {
public:
vector<int> solve(Node *root , vector<int> &ans){
    if(root!=NULL){
        for(Node *child:root->children){
            solve(child,ans);
        }
        ans.push_back(root->val);
    }
    return ans;
}
    vector<int> postorder(Node* root) {
        vector<int> ans;
        solve(root,ans);
        return ans;

        
    }
};
