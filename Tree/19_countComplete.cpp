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

int count(Node* root){
    if(!root) return 0;
    int lh = 0,rh = 0;
    Node* curr = root;
    while (curr){
        lh++;
        curr = curr->left;
    }
    curr = root;
    while (curr){
        rh++;
        curr = curr->right;
    }
    if(lh==rh) return (1<<lh)-1;
    return 1+count(root->left)+count(root->right);    
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(7);
    root->left->left = new Node(9);
    root->left->right = new Node(2);
    root->right->left = new Node(3);

    cout<<count(root);

    return 0;
}