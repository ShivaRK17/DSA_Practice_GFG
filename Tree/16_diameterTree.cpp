#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

int dia =  0;
int height(Node* root){
    if(!root) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    dia = max(lh+rh+1,dia);
    return max(lh,rh)+1;
}

int main(){
    Node *root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(7);
    root->left->left = new Node(9);
    root->right->right = new Node(3);

    height(root);
    cout<<dia;
    return 0;
}