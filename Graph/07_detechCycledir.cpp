#include<bits/stdc++.h>
using namespace std;

bool DFSRec(vector<vector<int>> v,vector<bool> vis,vector<bool> rec,int s){
    vis[s] = true;
    rec[s] = true;
    for(auto u:v[s]){
        if(vis[u]==false && DFSRec(v,vis,rec,u)){
            return true;
        }
        else if(rec[u]==true) return true;
    }
    return false;
}

bool isCycle(vector<vector<int>> v){
    vector<bool> vis(v.size(),0);
    vector<bool> rec(v.size(),0);
    for(int i =0;i<v.size();i++){
        if(vis[i]==false){
            if(DFSRec(v,vis,rec,i)==true){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<vector<int>> v = {
        {1},
        {},
        {1,3},
        {4},
        {5},
        {3}  
    };
    cout<<isCycle(v);
    return 0;
}