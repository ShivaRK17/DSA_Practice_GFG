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
int res = 0;
int burnTree(Node* root,int leaf,int &dist){
    if(!root) return 0;
    if(root->data==leaf){
        dist = 0;
        return 1;
    }
    int ldist = -1,rdist = -1;
    int lh = burnTree(root->left,leaf,ldist);
    int rh = burnTree(root->right,leaf,rdist);
    if(ldist!=-1){
        dist = ldist+1;
        res = max(res,dist+rh);
    }
    else if(rdist!=-1){
        dist= rdist+1;
        res= max(res,dist+lh);
    }
    return max(lh,rh)+1;
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(7);
    root->left->left = new Node(9);
    root->right->right = new Node(3);

    int dist = 0;
    burnTree(root,3,dist);

    cout<<res<<endl;
    return 0;
}