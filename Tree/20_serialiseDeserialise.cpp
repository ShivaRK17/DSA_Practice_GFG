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

void serialize(Node*  root,vector<int> &arr){
    if(!root){
        arr.push_back(-1);
        return;
    }
    arr.push_back(root->data);
    serialize(root->left,arr);
    serialize(root->right,arr);
}

Node* deserialise(vector<int> v,int &index){
    if(index==v.size()) return NULL;
    int val = v[index++];
    if(val==-1) return NULL;
    Node* newNode = new Node(val);
    newNode->left = deserialise(v,index);
    newNode->right = deserialise(v,index);
    return newNode;
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(7);
    root->left->left = new Node(9);
    root->right->right = new Node(3);

    vector<int> ans = {};
    serialize(root,ans);
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;

    int index = 0;
    Node* head = deserialise(ans,index);
    cout<<head->data<<endl;
    cout<<head->left->data<<endl;
    cout<<head->right->data<<endl;

    return 0;
}