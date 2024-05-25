class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* node = head;
        while (node != NULL && node->next != NULL) {
            // int i=0;
            // vector<int> v;
            // while(i<2){
            //     v.push_back(node->val);
            // }
            int a = gcd(node->val, node->next->val);

            // i=0;
            ListNode* newNode = new ListNode(a);
            newNode->next = node->next;
            node->next = newNode;
            node = newNode->next;
            //  v.clear();
        }
        return head;
    }
};
