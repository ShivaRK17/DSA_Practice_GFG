#include<bits/stdc++.h>
using namespace std;

class Trie{
    public:
        Trie* child[2];
        Trie(){
            child[0] = child[1] = NULL;
        }
};

bool insert(Trie* root,int row,vector<vector<int>> v){
    Trie* curr = root;
    bool flag = false;
    for(int i = 0;i<v[0].size();i++){
        int index = v[row][i];
        if(curr->child[index]==NULL){
            curr->child[index] = new Trie();
            flag = true;
        }
        curr = curr->child[index];
    }
    return flag;
}

int countDist(vector<vector<int>> v){
    Trie* root = new Trie();
    int m = v.size();
    int res = 0;
    for(int i = 0;i<m;i++){
        if(insert(root,i,v)){
            res++;
        }
    }
    return res;
}

int main(){
    vector<vector<int>> v = {
        {1,0,0,0},
        {1,1,0,0},
        {1,0,0,0},
        {1,1,0,0}
    };
    cout<<countDist(v);
    return 0;
}