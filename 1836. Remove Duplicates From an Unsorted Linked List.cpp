#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

// Define the Node structure
struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};

// Function to remove duplicates from a sorted linked list
Node* removeDuplicates(Node* head) {
    set<int> s;
    int count=0;
    while(head!=NULL){
        count++;
        s.insert(head->val);
        head=head->next;
    }
    //Node *dummy = new Node(0);
    Node *current = new Node(0);
    
    for(auto it:s){
      current->next = new Node(it);
      current = current->next;
    }

    // for (int i = 0; i < count; ++i) {
    //     current->next = new Node(s[i]);
    //     current = current->next;
    // }
    return current->next;
    //approch 2 
//      unordered_set<int> seen;
//   Node * current =head;
//   Node * prev=NULL;

//   while(current!=NULL){
//      if(seen.find(current->data)!=seen.end()){
//       prev->next=current->next;
//       delete(current);
//      }
//      else{
//       seen.insert(current->data);
//       prev=current;

//      }
//      current=prev->next;
//   }
//   return head;
    
    
    
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create a sample linked list
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(3);

    cout << "Original List: ";
    printList(head);

    // Remove duplicates
    Node* result = removeDuplicates(head);

    cout << "List after removing duplicates: ";
    printList(result);

    // Free memory (assuming you have a function to delete the linked list nodes)
    while (result != nullptr) {
        Node* temp = result;
        result = result->next;
        delete temp;
    }

    return 0;
}
