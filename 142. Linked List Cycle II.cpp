class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
        return NULL;
        ListNode * slow=head;
        ListNode *fast= head;
        ListNode *entry=head;
        while(fast->next !=NULL && fast->next->next!=NULL){
            
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                while(slow!=entry){
                entry=entry->next;
                slow=slow->next;
                }
                return entry; 
            }
        }
        return NULL;
    }
};
