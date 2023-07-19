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

void inorder(Node* root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    return;
}
void preorder(Node* root){
    if(root){
        cout<<root->data<<" ";
        inorder(root->left);
        inorder(root->right);
    }
    return;
}
void postorder(Node* root){
    if(root){
        inorder(root->left);
        inorder(root->right);
        cout<<root->data<<" ";
    }
    return;
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(7);
    root->left->left = new Node(9);
    root->right->right = new Node(3);

    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}