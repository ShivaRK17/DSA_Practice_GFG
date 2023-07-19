#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        this->data = x;
        this->next = NULL;
    }
};

void traverse(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
Node * insertBegin(Node* head,int x){
    Node* curr = new Node(x);
    curr->next = head;
    head = curr;
    return head;
}


int main(){
    Node* head = NULL;
    head = insertBegin(head,9);
    head = insertBegin(head,1);
    head = insertBegin(head,8);
    head = insertBegin(head,7);
    head = insertBegin(head,6);
    head = insertBegin(head,4);
    head = insertBegin(head,3);
    traverse(head);


    return 0;
}