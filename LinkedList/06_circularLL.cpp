#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        this->data = x;
        this->next = this;
    }
};

void traversal(Node* head){
    if(!head) return;
    Node* curr = head;
    do
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    } while (curr!=head);
    cout<<endl;
}

Node* insertBegin(Node* head,int x){
    Node* newNode = new Node(x);
    if(!head) return newNode;
    Node* curr = head;
    while(curr->next!=head){
        curr = curr->next;
    }
    curr->next = newNode;
    newNode->next = head;
    head = newNode;
    return head;
}
Node* insertEnd(Node* head,int x){
    Node* newNode = new Node(x);
    if(!head) return newNode;
    newNode->next = head->next;
    head->next = newNode;
    swap(head->data,newNode->data);
    head = newNode;
    return head;
}

Node* deleteBegin(Node* head){
    if(!head || !head->next){
        return NULL;
    }
    Node* temp = head->next;
    head->next = temp->next;
    head->data = temp->data;
    delete temp;
    return head;
}
Node* deleteAtK(Node* head,int k){ //n>=k
    if(!head || head->next==head){
        return NULL;
    }
    if(k==0){
        return deleteBegin(head);
    }
    Node* curr = head;
    int i = 1;
    while(i<k){
        curr = curr->next;
        i++;
    }
    Node* temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}

int main(){
    Node* one = new Node(1);
    Node* two = new Node(2);
    Node* three = new Node(3);

    one->next = two;
    two->next = three;
    three->next = one;

    Node* head = one;

    traversal(head);
    head = insertBegin(head,12);
    traversal(head);
    head = insertEnd(head,14);
    traversal(head);
    head = deleteBegin(head);
    traversal(head);
    head = deleteAtK(head,2);
    traversal(head);

    return 0;
}