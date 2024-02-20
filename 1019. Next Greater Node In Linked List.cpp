// approch 1 convert the linkedlist into vector ad perform the further operation
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        vector<int> ans(v.size(), 0);
        vector<int> s;
        for(int i=0;i<v.size();i++){
            while(!s.empty()&& v[s.back()]<v[i]){
                ans[s.back()]=v[i];
                s.pop_back();
            }
            s.push_back(i);
        }
        return ans;
    }
};


