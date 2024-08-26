class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL){
            return {} ;
        }
        vector<vector<int>> ans;
        queue<Node *> q;
        q.push(root);
        while(!q.empty()){
            vector<int> v;
            int n=q.size();
           
            for(int i=0;i<n;i++){
                Node *temp=q.front();
                q.pop();
                for(auto child:temp->children){
                    q.push(child);
                }
                v.push_back(temp->val);



            }
            ans.push_back(v);


        }
        return ans;

        
    }
};
