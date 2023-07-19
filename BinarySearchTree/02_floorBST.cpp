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

Node* floorNode(Node* root,int x){
    Node* curr = root;
    Node* ans = NULL;
    if(!root) return NULL;
    while(curr){
        if(curr->data==x){
            return curr;
        }
        else if(curr->data>x){
            curr = curr->left;
        }
        else{
            ans = curr;
            curr = curr->right;
        }
    }
    return ans;
}

int main(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);

    cout<<floorNode(root,23)->data;
    return 0;
}