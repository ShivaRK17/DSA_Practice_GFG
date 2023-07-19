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

void preOrder(Node* root){
    if(!root) return;
    stack<Node*> s;
    s.push(root);
    while(!s.empty()){
        Node* curr = s.top();
        cout<<curr->data<<" ";
        s.pop();
        if(curr->right) s.push(curr->right);
        if(curr->left)  s.push(curr->left);
    }
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(7);
    root->left->left = new Node(9);
    root->right->right = new Node(3);
    
    preOrder(root);
    return 0;
}