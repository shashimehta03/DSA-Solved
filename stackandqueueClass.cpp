#include<bits/stdc++.h>
using namespace std;
class Stack{
    int n=0;
    int x=-1;
    int arr[100];
    public:
    void push(int a){
        arr[++x]=a;
    }
    void pop(){
        x--;
    }
    void display(){
        for(int i=x;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    
};
class queuee{
    int n=0;
    int rear=0;
    int front=0;
    int arr[100];
    public:
    void push(int a){
        arr[rear++]=a;
    }
    void pop(){
        front++;
    }
    void display(){
        cout<<"QUEUE"<<endl;
        for(int i=front;i<rear;i++){
            cout<<arr[i]<<" ";
        }
    }
    
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.display();
    s.pop();
    s.display();
    
    queuee q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.display();
    q.pop();
    q.display();
}
