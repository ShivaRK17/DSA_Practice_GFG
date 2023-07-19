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

void inorder(Node* root,int k,unordered_map<int,int> &m,int &ans){
    if(root){
        inorder(root->left,k,m,ans);
        if(m[root->data]){
            ans = true;
            cout<<root->data<<" "<<(k-(root->data))<<endl;
            return;
        }
        m[k-(root->data)]++;
        inorder(root->right,k,m,ans);
    }
}

bool isSum(Node* root,int k){
    unordered_map<int,int> m;
    int ans = false;
    inorder(root,k,m,ans);
    return ans;
}

int main(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);

    cout<<isSum(root,40);
    return 0;
}