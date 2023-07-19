#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;
        Node(int x){
            this->data = x;
            this->prev = this->next = NULL;
        }
};

void traversal(Node* head){
    Node* curr = head;
    while(curr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

Node* insertBegin(Node* head,int x){
    Node* newNode = new Node(x);
    if(!head){
        return newNode;
    }
    newNode->next = head;
    head->prev = newNode;
    return newNode;
}
Node* insertEnd(Node* head,int x){
    Node* newNode = new Node(x);
    if(!head){
        return newNode;
    }
    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

Node* deleteBegin(Node* head){
    if(!head || !head->next){
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node* deleteLast(Node* head){
    if(!head || !head->next){
        return NULL;
    }
    Node*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
    return head;
}

Node* reverseDLL(Node* head){
    if(!head || !head->next){
        return head;
    }
    Node* curr = head;
    // Node* temp = NULL;
    while(curr->next!=NULL){
        // temp = curr->prev;
        // curr->prev = curr->next;
        // curr->next = temp;
        swap(curr->next,curr->prev);
        curr = curr->prev;
    }
    curr->next = curr->prev;
    curr->prev = NULL;
    return curr;
    // return temp->prev;
}

int main(){
    Node* one = new Node(3);
    Node* two = new Node(4);
    Node* three = new Node(6);

    one->next = two;
    two->next = three;

    two->prev = one;
    three->prev = two;

    Node* head = one;
    traversal(head);

    head = insertBegin(head,9);
    traversal(head);

    // head = reverseDLL(head);
    // traversal(head);

    // head = reverseDLL(head);
    // traversal(head);

    // head = deleteBegin(head);
    // traversal(head);

    // head = deleteLast(head);
    // traversal(head);

    head = insertEnd(head,10);
    traversal(head);

    return 0;
}