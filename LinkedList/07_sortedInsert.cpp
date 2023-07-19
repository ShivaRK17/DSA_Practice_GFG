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

Node* insertSort(Node* head,int x){
    Node* newNode = new Node(x);
    if(!head){
        return newNode;
    }
    Node* curr = head;
    if(curr->data>x){
        newNode->next = curr;
        return newNode;
    }
    while(curr->next!=NULL && curr->next->data<x){
        curr = curr->next;
    }
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

int main(){
    Node* head = NULL;
    head = insertBegin(head,9);
    head = insertBegin(head,8);
    head = insertBegin(head,7);
    head = insertBegin(head,3);

    traverse(head);

    head = insertSort(head,1);
    traverse(head);

    return 0;
}