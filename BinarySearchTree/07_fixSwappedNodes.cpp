#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int d){
            data = d;
            left = right = NULL;
        }
};

void inorder(Node* root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

Node* temp = NULL;
Node* first = NULL;
Node* second = NULL;

void fixSwap(Node* root){
    if(!root) return;
    fixSwap(root->left);
    if(temp && root->data<temp->data){
        if(first==NULL){
            first = temp;
        }
        second = root;
    }
    temp = root;
    fixSwap(root->right);
}

int main(){
    Node* root = new Node(20);
    root->left = new Node(60);
    root->right = new Node(80);
    root->left->left = new Node(4);
    root->left->right = new Node(10);
    root->right->left = new Node(8);
    root->right->right = new Node(100);

    inorder(root);
    cout<<endl;

    fixSwap(root);
    swap(first->data,second->data);

    inorder(root);
    cout<<endl;

    return 0;
}