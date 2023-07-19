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
}
void recTraverse(Node* head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    recTraverse(head->next);
}

int main(){
    Node* one = new Node(4);
    Node* two = new Node(5);
    Node* three = new Node(9);

    one->next = two;
    two->next = three;

    Node* head = one;

    // traverse(head);
    recTraverse(head);
    return 0;
}