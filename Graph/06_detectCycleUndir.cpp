#include<bits/stdc++.h>
using namespace std;

bool DFSRec(vector<vector<int>> v,vector<bool> &vis,int s,int par){
    vis[s] = true;
    // cout<<s<<" ";
    for(auto u:v[s]){
        if(vis[u]==false){
            if(DFSRec(v,vis,u,s)) return true;
        }
        else{
            if(u!=par){
                return true;
            }
        }
    }
    return false;
}

bool isCycle(vector<vector<int>> v){
    vector<bool> vis(v.size(),0);
    for(int i = 0;i<v.size();i++){
        if(vis[i]==false){
            if(DFSRec(v,vis,i,-1)==true){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<vector<int>> v = {
        {1},
        {0,2,3},
        {1,3},
        {1,2}
    };
    cout<<isCycle(v);
    return 0;
}