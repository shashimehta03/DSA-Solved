class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL){
            return 0;
        }
        int ans=0;
        for(Node *child: root->children){
            ans=max(ans,maxDepth(child));
        }
        return ans+1;
    }
};
