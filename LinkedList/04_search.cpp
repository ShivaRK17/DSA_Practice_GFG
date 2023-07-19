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
    cout<<endl;
}

Node * insertBegin(Node* head,int x){
    Node* curr = new Node(x);
    curr->next = head;
    head = curr;
    return head;
}
int search(Node* head,int val){
    if(!head){
        return -1;
    }
    int i = 0;
    Node* curr = head;
    while(curr!=NULL && curr->data!=val){
        curr = curr->next;
        i++;
    }
    if(!curr){
        return -1;
    }
    if(curr->data==val){
        return i;
    }
    return -1;
}

int searchRec(Node* head,int x){
    if(head==NULL){
        return -1;
    }
    if(head->data == x){
        return 0;
    }
    int res = searchRec(head->next,x);
    if(res==-1){return -1;}
    return res+1;
}

int main(){
    Node* head = NULL;
    head = insertBegin(head,5);
    head = insertBegin(head,7);
    head = insertBegin(head,3);
    head = insertBegin(head,2);
    traversal(head);

    // cout<<search(head,9);
    cout<<searchRec(head,5);
    return 0;
}