#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

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
    ListNode* reverse(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while (temp != NULL) {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while (temp != NULL) {
            ListNode* kthnode = findkthnode(temp, k);
            if (kthnode == NULL) {
                if (prev) {
                    prev->next = temp;
                }
                break;
            }
            ListNode* nextnode = kthnode->next;
            kthnode->next = NULL;
            reverse(temp);
            if (temp == head) {
                head = kthnode;
            } else {
                prev->next = kthnode;
            }
            prev = temp;
            temp = nextnode;
        }
        return head;
    }
};

int main() {
    // Test case
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2;

    Solution sol;
    ListNode *result = sol.reverseKGroup(head, k);

    // Print the reversed list
    while (result != NULL) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;

    return 0;
}
