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

void inorder(Node* root,map<int,int> &m,int dis){
    if(root){
        inorder(root->left,m,dis-1);
        m[dis] = m[dis]+root->data;
        inorder(root->right,m,dis+1);
    }
    return;
}

void vSum(Node* root){
    map<int,int> m;
    inorder(root,m,0);
    for(auto i:m){
        cout<<i.second<<" ";
    }
}


int main(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);

    vSum(root);
    return 0;
}