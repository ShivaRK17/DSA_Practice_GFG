#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char data;
    Node* next;
    Node(char x){
        this->data = x;
        this->next = NULL;
    }
};

Node * insertBegin(Node* head,char x){
    Node* curr = new Node(x);
    curr->next = head;
    head = curr;
    return head;
}

void traverse(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
Node* rev(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    while(curr){
        Node* next = curr->next;
        curr->next = prev;
        prev =curr;
        curr = next;
    }
    return prev;
}
bool isPal(Node* head){
    Node* fast = head;
    Node* slow = head;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    slow = rev(slow);
    Node* curr1 = head;
    Node* curr2 = slow;
    while(curr2){
        if(curr1->data!=curr2->data){
            return false;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return true;
}

int main(){
    Node* head = NULL;
    head = insertBegin(head,'R');
    head = insertBegin(head,'A');
    head = insertBegin(head,'D');
    head = insertBegin(head,'A');
    // head = insertBegin(head,'A');
    head = insertBegin(head,'R');
    traverse(head);

    cout<<isPal(head);
    return 0;
}