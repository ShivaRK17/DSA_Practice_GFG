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

bool childSum(Node* root){
    if(!root) return true;
    if(!root->left && !root->right) return true;
    if(!root->left) return root->data==root->right->data && childSum(root->right);
    if(!root->right) return root->data==root->left->data && childSum(root->left);
    return childSum(root->left)&&childSum(root->right) && ((root->left->data)+(root->right->data)==(root->data));
}

int main(){
    Node* root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);

    cout<<childSum(root);
    return 0;
}