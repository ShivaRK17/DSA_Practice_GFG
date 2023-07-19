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

int maxWidth(Node* root){
    if(!root) return 0;
    queue<Node*> q;
    int ans = 1;
    q.push(root);
    while(!q.empty()){
        int size= q.size();
        ans = max(size,ans);
        for(int i = 0;i<size;i++){
            Node* curr = q.front();
            q.pop();
            if((*curr).left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
    }
    return ans;
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(7);
    root->left->left = new Node(9);
    root->right->right = new Node(3);

    cout<<maxWidth(root);
    return 0;
}