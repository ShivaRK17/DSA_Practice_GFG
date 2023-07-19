#include<bits/stdc++.h>
using namespace std;

void bellmanFord(vector<vector<vector<int>>> adj,int s){
    int n = adj.size();
    vector<int> dist(n,INT_MAX);
    dist[s] = 0;
    for(int count = 0;count<n;count++){
        for(auto u:adj[count]){
            dist[u[0]] = min(dist[u[0]],dist[count]+u[1]);
        }
    }
    for(int i = 0;i<adj.size();i++){
        for(auto u:adj[i]){
            if(dist[u[0]]>dist[i]+u[1]){
                cout<<"Negative Cycle Found\n";
            }
        }
    }
    for(auto i:dist){
        cout<<i<<" ";
    }
}

int main(){
    vector<vector<vector<int>>> v = {
        {{1,1},{2,4}},
        {{2,-3},{3,2}},
        {{3,3}},
        {}
    };
    // vector<vector<vector<int>>> v = {
    //     {{1,4},{2,8}},
    //     {{2,-8}},
    //     {{3,2}},
    //     {{1,3}}
    // };
    bellmanFord(v,0);
    return 0;
}