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

int maxTree(Node* root){
    if(!root){
        return 0;
    }
    return max(root->data,max(maxTree(root->left),maxTree(root->right)));
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(7);
    root->left->left = new Node(9);
    root->right->right = new Node(3);

    cout<<maxTree(root);
    return 0;
}