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

void levelOrder(Node* root){
    queue<Node*> q;
    if(!root) return;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
        cout<<temp->data<<" ";
        q.pop();
    }
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(7);
    root->left->left = new Node(9);
    root->right->right = new Node(3);

    levelOrder(root);
    return 0;
}