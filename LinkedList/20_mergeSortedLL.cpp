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

Node* mergeSort(Node* a,Node* b){
    Node* head = NULL;
    Node* tail = NULL;
    if(!a) return b;
    if(!b) return a;

    if(a->data<=b->data){
        head=tail=a;
        a = a->next;
    }
    else{
        head=tail=b;
        b = b->next;
    }

    while(a && b){
        if(a->data<=b->data){
            tail->next = a;
            a = a->next;
            tail = tail->next;
        }
        else{
            tail->next = b;
            b = b->next;
            tail = tail->next;
        }
    }
    if(!a){
        tail->next = b;
    }
    if(!b){
        tail->next = a;
    }
    return head;
}

int main(){
    Node* head = NULL;
    head = insertBegin(head,11);
    head = insertBegin(head,9);
    head = insertBegin(head,8);
    head = insertBegin(head,7);
    head = insertBegin(head,4);
    head = insertBegin(head,3);
    traverse(head);


    Node* head2 = NULL;
    head2 = insertBegin(head2,10);
    head2 = insertBegin(head2,8);
    head2 = insertBegin(head2,6);
    head2 = insertBegin(head2,5);
    traverse(head2);

    head = mergeSort(head,head2);
    traverse(head);

    return 0;

}