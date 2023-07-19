#include<bits/stdc++.h>
using namespace std;

//Task is to find Strongly connected components

// Step 1
void DFSRec(vector<vector<int>> v,stack<int> &st,vector<bool> &vis,int s){
    vis[s] = true;
    for(auto u:v[s]){
        if(!vis[u]){
            DFSRec(v,st,vis,u);
        }
    }
    st.push(s);
}

vector<int> toposort(vector<vector<int>> v){
    stack<int> st;
    int n = v.size();
    vector<bool> vis(n,false);
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            DFSRec(v,st,vis,i);
        }
    }
    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
// Step 2
vector<vector<int>> transpose(vector<vector<int>> v){
    vector<vector<int>> adj(v.size());
    for(int i = 0;i<v.size();i++){
        for(auto u:v[i]){
            adj[u].push_back(i);
        }
    }
    return adj;
}
// Step 3
void DFSrec(vector<vector<int>> adj,vector<bool> &vis,int s){
    vis[s] = true;
    cout<<s<<" ";
    for(auto u:adj[s]){
        if(!vis[u]){
            DFSrec(adj,vis,u);
        }
    }
}

void DFS(vector<vector<int>> adj,vector<int> v){
    vector<bool> vis(adj.size(),false);
    for(auto i:v){
        if(!vis[i]){
            DFSrec(adj,vis,i);
            cout<<endl;
        }
    }
}



void kosaraju(vector<vector<int>> v){
    //3 steps 

    //1 = Topo Sort
    vector<int> v1 = toposort(v);
    // 2 = transpose the graph
    v = transpose(v);
    //3 = DFS using flow of vector obtained from step 1
    DFS(v,v1);
}

int main(){
    vector<vector<int>> v = {
        {2},
        {0},
        {1,3},
        {4},
        {3}
    };
    kosaraju(v);
    return 0;
}