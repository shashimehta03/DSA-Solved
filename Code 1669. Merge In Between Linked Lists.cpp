class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *l1=list1;
        ListNode *l1head=l1;
        for(int i=0;i<a-1;i++){
            l1=l1->next;
        }     
        ListNode *l1tail=l1;
        for(int i=0;i<b-a+1;i++){
            l1=l1->next;
        }
        if(list2!=NULL){
        l1tail->next=list2;
        while(list2->next!=NULL){
            list2=list2->next;
        }
        list2->next=l1->next;
        }
        return l1head;
    }
};
