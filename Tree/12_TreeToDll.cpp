#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

Node* p = NULL;
Node* BTtoDLL(Node* root){
    if(!root) return root;
    Node* head = BTtoDLL(root->left);
    if(!p) head = root;
    else{
        root->left = p;
        p->right = root;
    }
    p = root;
    BTtoDLL(root->right);
    return head;
}

void traverse(Node* root){
    while(root){
        cout<<root->data<<" ";
        root = root->right;
    }
    return;
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(7);
    root->left->left = new Node(9);
    root->right->right = new Node(3);

    Node* head = BTtoDLL(root);
    traverse(head);
    return 0;
}