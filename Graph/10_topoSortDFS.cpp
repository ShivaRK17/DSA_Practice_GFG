#include<bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>> v,int s,stack<int> &st,vector<bool> & vis){
    vis[s] = true;
    for(auto u:v[s]){
        if(!vis[u]){
            DFS(v,u,st,vis);
        }
    }
    st.push(s);
}
void topoSort(vector<vector<int>> v){
    stack<int> st;
    vector<bool> vis(v.size(),0);
    for(int i = 0;i<v.size();i++){
        if(!vis[i]){
            DFS(v,i,st,vis);
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    vector<vector<int>> v= {
        {1},
        {3},
        {3,4},
        {4},
        {}
    };
    topoSort(v);
    return 0;
}