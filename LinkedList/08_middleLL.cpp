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

Node* mid(Node* head){
    Node* fast = head;
    Node* slow = head;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}


int main(){
    Node* head = NULL;
    head = insertBegin(head,9);
    head = insertBegin(head,8);
    head = insertBegin(head,7);
    head = insertBegin(head,3);
    traverse(head);

    Node* midd = mid(head);
    cout<<midd->data<<endl;

    return 0;
}