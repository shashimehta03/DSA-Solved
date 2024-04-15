class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;
        
        unordered_map<Node*, Node*> copies;
        Node* curr = head;
        
        // Create copies of all nodes and map original to copy
        while (curr) {
            copies[curr] = new Node(curr->val);
            curr = curr->next;
        }
        
        curr = head;
        // Assign next and random pointers for copied nodes
        while (curr) {
            copies[curr]->next = copies[curr->next];
            copies[curr]->random = copies[curr->random];
            curr = curr->next;
        }
        
        return copies[head];
    }
};
