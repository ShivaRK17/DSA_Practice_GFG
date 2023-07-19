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

Node* reverseLL(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    while(curr){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* revRecLL(Node* head){
    if(!head || !head->next){
        return head;
    }
    Node* recHead = revRecLL(head->next);
    Node* recTail = head->next;
    recTail->next = head;
    head->next = NULL;
    return recHead;
}

int main(){
    Node* head = NULL;
    head = insertBegin(head,9);
    head = insertBegin(head,8);
    head = insertBegin(head,7);
    head = insertBegin(head,3);

    traverse(head);

    // head = reverseLL(head);
    // traverse(head);
    head = revRecLL(head);
    traverse(head);

    return 0;
}