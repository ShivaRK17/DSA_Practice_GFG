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
Node* revInK(Node* head,int k){
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    int i = 0;
    while(i<k && curr){
        next =  curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        i++;
    }
    if(next!=NULL){
        Node* temp = revInK(next,k);
        head->next = temp;
    }
    return prev;
}

int main(){
    Node* head = NULL;
    head = insertBegin(head,9);
    head = insertBegin(head,8);
    head = insertBegin(head,6);
    head = insertBegin(head,7);
    head = insertBegin(head,5);
    head = insertBegin(head,2);
    head = insertBegin(head,3);
    traverse(head);

    head = revInK(head,3);
    traverse(head);
    return 0;
}