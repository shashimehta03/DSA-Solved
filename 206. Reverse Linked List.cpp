// Approch 1 Using vector
// Linkedlist->vector->reverse vector-> Linkedlist -> return
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode *node =head;
       vector<int> v;
       while(node!=NULL){
           v.push_back(node->val);
           node=node->next;
       }
       reverse(v.begin(),v.end());
      ListNode* dummy = new ListNode(0); 
        ListNode* tail = dummy;
        for (int val : v) {
            tail->next = new ListNode(val);
            tail = tail->next;
        }

        return dummy->next; 
    }
};
// approch 2
//using prev , curr, and temp 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode * prev=NULL;
       ListNode * curr=head;
       ListNode *temp=curr;
       while(temp!=NULL){
           temp=curr->next;
           curr->next=prev;
           prev=curr;
           curr=temp;
       }
       return prev;
    }
};