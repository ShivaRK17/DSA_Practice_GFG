#include<bits/stdc++.h>
using namespace std;

class HuffNode{
    public:
        char ch;
        int freq;
        HuffNode* left;
        HuffNode* right;
        HuffNode(char c,int f){
            ch=  c;
            freq = f;
            left = right = NULL;
        }
};
class mycmp{
    public:
    bool operator()(HuffNode* h1,HuffNode* h2){
        return h1->freq > h2->freq;
    }
};
void traversal(HuffNode* root){
    if(root){
        cout<<root->ch<<" ";
        traversal(root->left);
        traversal(root->right);
    }
}

HuffNode* createTree(vector<pair<char,int>> v){
    priority_queue<HuffNode*,vector<HuffNode*>,mycmp> q;
    for(int i = 0;i<v.size();i++){
        q.push(new HuffNode(v[i].first,v[i].second));
    }
    while(q.size()>1){
        auto left = q.top();q.pop();
        auto right = q.top();q.pop();
        HuffNode* head = new HuffNode('$',left->freq+right->freq);
        head->left = left;
        head->right = right;
        q.push(head);
    }
    return q.top();
}

void printCodes(HuffNode* root,string s){
    if(!root) return;
    if((root->ch)!='$'){
        cout<<root->ch<<" "<<s<<endl;
        return;
    }
    printCodes(root->left,s+"0");
    printCodes(root->right,s+"1");
}

int main(){
    vector<pair<char,int>> v = {
        {'a',10},
        {'d',50},
        {'b',20},
        {'e',40},
        {'f',80},
    };
    // vector<pair<char,int>> v = {
    //     {'a',30},
    //     {'d',40},
    //     {'e',80},
    //     {'f',60},
    // };
    HuffNode* tree = createTree(v);
    printCodes(tree,"");
    return 0;
}