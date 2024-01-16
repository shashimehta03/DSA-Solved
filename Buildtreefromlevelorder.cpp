#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildTree(node *root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data to insert in left of"<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter the data to inser in right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void levelOrder(node *root){
    queue<node *> q ;
    q.push(root);
    q.push(NULL);// to get level wise seperaater
    while(!q.empty()){
        node *temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
            
        }else{
           cout<<temp->data<<" ";
           if(temp->left)
           q.push(temp->left);
           if(temp->right)
           q.push(temp->right); 
        }
        
    }
}
void preorder(node *root){
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root){
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void buildfrominorder(node *root){
    queue<node *> q;
    cout<<"Enter Data"<<endl;
    int data;
    cin>> data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node *temp=q.front();
        q.pop();
        cout<<"enter the left "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new node(leftdata);
            q.push(temp->left);
            
        }
        cout<<"enter right data"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
    }
}
int main(){
    node *root=NULL;
    // root=buildTree(root);
    // cout<<"Level order treavel"<<endl;
    // levelOrder(root);
    // cout<<"postorder"<<endl;
    // postorder(root);
    // cout<<endl;
    // cout<<"preoder"<<endl;
    // preorder(root);
    buildfrominorder(root);
   // levelOrder(root); to check
    
    return 0;
}
