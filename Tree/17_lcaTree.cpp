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

Node* LCA(Node* root,int n1,int n2){
    if(!root) return NULL;
    if(root->data==n1 || root->data==n2) return root;
    Node* llca = LCA(root->left,n1,n2);
    Node* rlca = LCA(root->right,n1,n2);
    if(llca && rlca) return root;
    if(!llca){
        return rlca;
    }
    if(!rlca){
        return llca;
    }
    return NULL;
}

int main(){
    Node *root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(7);
    root->left->left = new Node(9);
    root->right->right = new Node(3);

    cout<<LCA(root,7,9)->data;

    return 0;
}