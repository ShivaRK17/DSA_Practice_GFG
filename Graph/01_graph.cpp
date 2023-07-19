#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    vector<vector<int>> adj;
    Graph(int size){
        adj.resize(size);
    }
    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
};

int main(){
    Graph* g = new Graph(4);
    g->addEdge(0,1);
    g->addEdge(0,2);
    g->addEdge(1,2);
    g->addEdge(3,2);

    for(auto i:g->adj){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}