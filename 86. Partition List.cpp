class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
       ListNode *temp=head;
       ListNode *small= new ListNode();
       ListNode *smallhead= small; 
       ListNode *big= new ListNode();
       ListNode *bigHead = big; 
       while(temp!=NULL){
           if(temp->val<x){
               small->next=new ListNode(temp->val);
               small=small->next;
               temp=temp->next;
           }
           else{
               big->next=new ListNode(temp->val);
               big=big->next;
               temp=temp->next;
           }
       }
       small->next=bigHead->next;
       return smallhead->next;

    }
};
