#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left =  NULL;
        right = NULL;
    }
};

void printKRoot(Node* root,int k){
    if(!root) return;
    if(k==0) cout<<root->data<<" ";
    printKRoot(root->left,k-1);
    printKRoot(root->right,k-1);
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(7);
    root->left->left = new Node(9);
    root->right->right = new Node(3);

    printKRoot(root,2);
    return 0;
}