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

int preInd = 0;
Node* construct(vector<int> in,vector<int> pre,int is,int ie){
    if(is>ie) return NULL;
    Node* root = new Node(pre[preInd++]);
    int inInd = 0;
    for(int i = is;i<=ie;i++){
        if(root->data==in[i]){
            inInd = i;
            break;
        }
    }
    root->left = construct(in,pre,is,inInd-1);
    root->right = construct(in,pre,inInd+1,ie);
    return root;
}

void inorder(Node* root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    return;
}

int main(){
    // vector<int> in = {20,10,40,30,50};
    // vector<int> post = {50,40,30,20,10};
    vector<int> in = {9,3,15,20,7};
    vector<int> post = {9,15,7,20,3};

    reverse(post.begin(),post.end());
    Node* root = construct(in,post,0,in.size()-1);
    
    inorder(root);
    return 0;
}