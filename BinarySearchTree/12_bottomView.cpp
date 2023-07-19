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

void topView(Node* root){
    map<int,int> m;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto fr = q.front();
        Node* temp = fr.first;
        int dis = fr.second;
        q.pop();
        m[dis] = temp->data;
        if(temp->left) q.push({temp->left,dis-1});
        if(temp->right) q.push({temp->right,dis+1});
    }
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
    
    topView(root);
    return 0;
}