#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int data){
        val=data;
        next=NULL;
    }
};
ListNode *solve(ListNode *node,int n,int m){
    ListNode *lefthalf=nullptr;
    ListNode *ans=node;
    while(node!=NULL){
        for(int i=0;i<n && node!=NULL;i++){
            lefthalf=node;
            node=node->next;
        }
        if (node == nullptr) break;
        for(int i=0;i<m &&  node!=NULL;i++){
            node=node->next;
        }
        if(lefthalf!=NULL)
        lefthalf->next=node;
    }
    return ans;
}
void display(ListNode *head){
    cout<<"now diaplying"<<endl;
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }cout<<endl;
}
int main(){
    ListNode *head=nullptr;
    ListNode *list=head;
    int n;
    cin>>n;
     for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        ListNode *newNode = new ListNode(a); // Create a new node

        if (head == nullptr) {
            head = newNode; // If head is null, set head to the new node
            list = head;    // Also set list to head
        } else {
            list->next = newNode; // Link the new node to the list
            list = list->next;     // Move list to the new node
        }
    }
    ListNode *part=solve(head,2,2);
    display(part);
    
}
