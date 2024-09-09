
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode *temp=head;
        int sum=0;
        while(temp!=NULL){
            sum++;
            temp=temp->next;
        }
        int rem=sum%k;
        int div=sum/k;
        vector<ListNode *> ans(k,NULL);
        int i=0;
        temp=head;
        while(temp!=NULL && i<k){
            ans[i]=temp;
            int partSize = div + (rem > 0 ? 1 : 0);  
            for(int j=1;j<partSize && temp!=NULL;j++){
                temp=temp->next;
            }
            rem--;
            ListNode *partEnd=temp->next;
            temp->next=NULL;
            temp=partEnd;
            i++;

        }
        return ans;
    }
};
