#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
Node* insertAtK(Node* head, int val, int pos) {
    if(head==NULL){
        if(pos==1){
           return new Node(val);
        }
        else{
            return head;
        }
    }
    if(pos==1){
        return new Node(val,head);
    }
    Node *node=head;
    int count=0;
    while(node!=NULL){
        count++;
        if(count==pos-1){
            Node *n= new Node(val);
            n->next=node->next;
            node->next=n;
        }
        node=node->next;
    }
    return head;  
}
int main() {
    vector<int> arr = {12, 8, 5, 7};
    int val = 100;
    int k = 3;
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    head = insertAtK(head, val, k);
    printLL(head);
    return 0;
}
