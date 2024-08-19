#include <bits/stdc++.h>
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode *,int> mpp;
        ListNode *temp=headA;
        int some_value=1;
        while(temp!=NULL){
            mpp[temp] = some_value; 
            temp=temp->next;
        }
        temp=headB;
        while(temp!=NULL){
            if(mpp.find(temp)!=mpp.end()){
                return temp;
            }
            else{
                temp=temp->next;
            }
        }
        return NULL;
        
    }
};

// without using extra space map
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp=headA;
        int sizeA=0,sizeB=0;
        while(temp!=NULL){
            sizeA++;
            temp=temp->next;
        }
        temp=headB;
        while(temp!=NULL){
            sizeB++;
            temp=temp->next;
        }
        if(sizeA>sizeB){
            int diff=sizeA-sizeB;
            temp=headA;
            for(int i=0;i<diff;i++){
                temp=temp->next;
            }
            while(temp!=NULL &&  headB!=NULL){
                if(temp==headB){
                    return temp;
                }
                temp=temp->next;
                headB=headB->next;
            }

        }
        if(sizeB>sizeA){
            int diff=sizeB-sizeA;
            temp=headB;
            for(int i=0;i<diff;i++){
                temp=temp=temp->next;
            }
            while(temp!=NULL && headA!=NULL){
                if(temp==headA){
                    return temp;
                }
                temp=temp->next;
                headA=headA->next;
            }

        }

        // for indeticaal case;
        while(headA!=NULL && headB!=NULL){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};
