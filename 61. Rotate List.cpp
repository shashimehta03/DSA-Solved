class Solution {
public:
    ListNode* findkthnode(ListNode* temp, int k) {
        k -= 1;
        while (temp != NULL && k > 0) {
            k--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0) return head;
        int len = 1;
        ListNode* tail = head;
        while(tail->next!=NULL){
            len++;
            tail = tail->next;
        }
        if(k%len==0) return head;
        k=k%len;
        tail->next=head;
        ListNode *newlastnode =findkthnode(head,len-k);
        head=newlastnode->next;
        newlastnode->next=NULL;
        return head;
    }
};
