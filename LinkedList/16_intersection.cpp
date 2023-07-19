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

Node* intersection(Node* head1,Node* head2,int d){
    for (int i = 0; head1 && i < d; i++){
        head1 = head1->next;
    }
    while(head1 && head1!=head2){
        head1 = head1->next;
        head2 = head2->next;
    }
    return head1;
}

Node* getIntersection(Node* head1,Node* head2){
    int count1 = 0;
    int count2 = 0;
    Node* curr1 = head1;
    Node* curr2 = head2;
    while (curr1){
        count1++;
        curr1 = curr1->next;
    }
    while (curr2){
        count2++;
        curr2 = curr2->next;
    }
    int d = abs(count1-count2);
    if(count1>count2){
        return intersection(head1,head2,d);
    }
    return intersection(head2,head1,d);
}


int main(){
    Node* head = NULL;
    head = insertBegin(head,9);
    head = insertBegin(head,8);
    head = insertBegin(head,4);
    head = insertBegin(head,5);
    head = insertBegin(head,7);
    head = insertBegin(head,3);
    traverse(head);

    Node* head2 = NULL;
    head2 = insertBegin(head2,6);
    head2->next = head->next->next->next;
    traverse(head2);

    Node* inter = getIntersection(head,head2);
    cout<<inter->data;

    return 0;
}