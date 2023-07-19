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

bool search(Node* root,int x){
    if(!root){
        return false;
    }
    if(root->data==x) return true;
    else if(root->data>x){
        return search(root->left,x);
    }
    return search(root->right,x);
}
Node* insert(Node* root,int x){
    if(!root) return new Node(x);
    if(root->data>x){
        root->left = insert(root->left,x);        
    }
    else{
        root->right = insert(root->right,x);
    }
    return root;
}
Node* getSucc(Node* root){
    root = root->right;
    while(root && root->left){
        root = root->left;
    }
    return root;
}
Node* deleteNode(Node* root,int x){
    if(!root) return root;
    if(root->data>x){
        root->left = deleteNode(root->left,x);
    }
    else if(root->data<x){
        root->right = deleteNode(root->right,x);
    }
    else{
        if(!root->left){
            Node*temp = root->right;
            delete root;
            return temp;
        }
        else if(!root->right){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else{
            Node* succ = getSucc(root);
            root->data = succ->data;
            root->right = deleteNode(root->right,succ->data);
        }
        return root;
    }
    return NULL;
}


void traversal(Node* root){
    if(root){
        traversal(root->left);
        cout<<root->data<<" ";
        traversal(root->right);
    }
}

int main(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
    
    // cout<<search(root,16);
    traversal(root);
    cout<<endl;
    root = insert(root,19);
    traversal(root);
    cout<<endl;
    deleteNode(root,20);
    traversal(root);
    cout<<endl;
    return 0;
}