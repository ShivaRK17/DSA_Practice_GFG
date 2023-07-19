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

Node* deleteBegin(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* curr = head;
    head = head->next;
    delete(curr);
    return head;
}
Node* deleteEnd(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* curr = head;
    while(curr->next->next!=NULL){
        curr = curr->next;
    }
    delete(curr->next);
    curr->next = NULL;
    return head;
}

int main(){
    Node* head = NULL;
    head = insertBegin(head,5);
    head = insertBegin(head,7);
    head = insertBegin(head,3);
    head = insertBegin(head,2);
    traversal(head);
    cout<<endl;
    head = deleteBegin(head);
    traversal(head);
    cout<<endl;
    head = deleteEnd(head);
    traversal(head);
    cout<<endl;

    return 0;
}