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

void printLeft(Node* root,int level,int &maxlevel){
    if(!root) return;
    if(level>maxlevel){
        cout<<root->data<<" ";
        maxlevel = level;
    }
    printLeft(root->left,level+1,maxlevel);
    printLeft(root->right,level+1,maxlevel);
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(7);
    root->left->left = new Node(9);
    root->right->right = new Node(3);

    int maxlevel = 0;
    printLeft(root,1,maxlevel);
    return 0;
}