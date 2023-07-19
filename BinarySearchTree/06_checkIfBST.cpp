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
int temp = INT_MIN;
bool checkBST(Node* root){
    if(!root) return true;
    if(checkBST(root->left)==false) return false;
    if(temp>root->data){
        return false;
    }
    temp = root->data;
    return checkBST(root->right);
}

int main(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    // root->left->right = new Node(12);
    root->left->right = new Node(1);
    root->right->left = new Node(16);
    root->right->right = new Node(25);

    cout<<checkBST(root);
    return 0;
}