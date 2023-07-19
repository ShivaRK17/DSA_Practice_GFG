#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void traversal(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node * insertBegin(Node* head,int x){
    Node* curr = new Node(x);
    curr->next = head;
    head = curr;
    return head;
}
Node* insertEnd(Node* head,int x){
    Node* newNode = new Node(x);
    if(!head){
        return newNode;
    }
    Node* curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->next = newNode;
    return head;
}

Node* insertAtPos(Node* head,int x,int pos){
    if(!head){
        return head;
    }
    if(pos==0){
        return insertBegin(head,x);
    }
    Node* newNode = new Node(x);
    Node* curr = head;
    int i = 1;
    while(curr->next!=NULL && i<pos){
        curr = curr->next;
        i++;
    }
    if(i!=pos){
        return head;
    }
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

int main(){
    Node* head = NULL;
    head = insertBegin(head,5);
    head = insertBegin(head,7);
    head = insertBegin(head,3);
    head = insertBegin(head,2);

    head = insertEnd(head,10);

    head = insertAtPos(head,4,1);

    traversal(head);
    return 0;
}