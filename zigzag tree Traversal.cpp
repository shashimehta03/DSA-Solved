class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> ans;
    	if(root==NULL)
    	return ans;
    	queue<Node *> q;
    	q.push(root);
    	bool lefttoright=true;
    	while(!q.empty()){
    	    int size=q.size();
    	    vector<Node *>level;
    	    for(int i=0;i<size;i++){
    	        Node *frontnode=q.front();
    	        q.pop();
    	        level.push_back(frontnode);
    	        if(frontnode->left){
    	            q.push(frontnode->left);
    	        }
    	        if(frontnode->right){
    	            q.push(frontnode->right);
    	        }
    	    }
    	    if(lefttoright){
    	        for(Node *frontnode:level){
    	            ans.push_back(frontnode->data);
    	        }
    	    }
    	    else{
    	        for(int i=level.size()-1;i>=0;i--){
    	            ans.push_back(level[i]->data);
    	        }
    	    }
    	    lefttoright=!lefttoright;
    	    
    	}
    	return ans;
    	
    	
    }
};
