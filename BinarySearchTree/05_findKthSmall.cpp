#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        int lcount;
        Node(int x){
            data = x;
            left = right = NULL;
            lcount = 0;
        }
};

Node* insert(Node* root,int x){
    Node* newNode = new Node(x);
    if(!root){
        return newNode;
    }
    else if(root->data>x){
        root->left = insert(root->left,x);
        root->lcount++;
    }
    else if(root->data<x){
        root->right = insert(root->right,x);
    }
    return root;
}

int kthSmall(Node* root,int k){
    if(!root) return -1;
    if((root->lcount)+1==k){
        return root->data;
    }
    else if((root->lcount+1)>k){
        return kthSmall(root->left,k);
    }
    else{
        return kthSmall(root->right,k-(root->lcount+1));
    }
}

int main(){
    Node* root = NULL;
    root = insert(root,5);
    root = insert(root,4);
    root = insert(root,7);
    root = insert(root,2);
    root = insert(root,9);
    root = insert(root,3);

    // cout<<root->left->data;
    cout<<kthSmall(root,6);
    
    return 0;
}