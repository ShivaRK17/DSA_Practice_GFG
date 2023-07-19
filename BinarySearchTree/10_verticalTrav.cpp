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

void inorder(Node* root,map<int,vector<int>> &m,int dist){
        if(root){
            m[dist].push_back(root->data);
            inorder(root->left,m,dist-1);
            inorder(root->right,m,dist+1);
        }
        return;
}

void vTrav(Node* root){
    map<int,vector<int>> m;
    inorder(root,m,0);
    for(auto i:m){
        for(auto j:i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);

    vTrav(root);
    return 0;
}