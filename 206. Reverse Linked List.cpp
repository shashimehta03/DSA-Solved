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
// Approach 3 using stack
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode *temp=head;
      stack<int> s;
      while(temp!=NULL){
          s.push(temp->val);
          temp=temp->next;
      }
      ListNode *curr=new ListNode();
      ListNode *ans = curr;
      while(!s.empty()){
          ans->next=new ListNode(s.top());
          s.pop();
          ans=ans->next;
      }
      return curr->next;
    }
};

// using prev next and temp 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode *temp=head;
      ListNode *prev=NULL;
      while(temp!=NULL){
          ListNode *front=temp->next; // storing next data
          temp->next=prev;//pointing to previous
          prev=temp;// updating previus to temp
          temp=front;// updating temp to next
      }
      return prev; // we are returning prev because it has return last element
    }
};
