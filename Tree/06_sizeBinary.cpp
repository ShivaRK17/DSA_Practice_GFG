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

int size(Node* root){
    if(!root) return 0;
    return size(root->left)+size(root->right)+1;
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(7);
    root->left->left = new Node(9);
    root->right->right = new Node(3);

    cout<<size(root);
    return 0;
}