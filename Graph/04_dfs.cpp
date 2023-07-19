#include<bits/stdc++.h>
using namespace std;

void dfsRec(vector<vector<int>> v,int s,vector<bool> &vis){
    vis[s] = true;
    cout<<s<<" ";
    for(auto i:v[s]){
        if(vis[i]==false){
            dfsRec(v,i,vis);
        }
    }
}

void dfs(vector<vector<int>> v){
    vector<bool> vis(v.size(),0);
    for(int i = 0;i<v.size();i++){
        if(vis[i]==false){
            dfsRec(v,i,vis);
        }
    }
}

int main(){
    vector<vector<int>> v = {
        {1,4},
        {0,2},
        {1,3},
        {0,5,6},
        {4,6},
        {4,5}
    };

    dfs(v);
    return 0;
}