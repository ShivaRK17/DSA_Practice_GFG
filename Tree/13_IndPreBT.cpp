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

int main(){
    vector<int> in = {20,10,40,30,50};
    vector<int> pre = {10,20,30,40,50};

    Node* root = construct(in,pre,0,in.size()-1);
    cout<<root->data;
    return 0;
}