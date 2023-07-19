#include<bits/stdc++.h>
using namespace std;

vector<int> topoSort(vector<vector<vector<int>>> &v){
    vector<int> ans;
    vector<int> indegree(v.size(),0);
    //Creating an indegree vector
    for(auto u:v){
        for(auto i:u){
            indegree[i[0]]++;
        }
    }
    //Create a queue q;
    queue<int> q;
    //Add all indegree 0 items in queue;
    for(int i = 0;i<indegree.size();i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    //Apply algo till q is empty
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        // cout<<curr<<" ";
        ans.push_back(curr);
        //Traverse through it's adjacents
        for(auto u: v[curr]){
            //Reduce and check if indegree is zero
            indegree[u[0]]--;
            if(indegree[u[0]]==0){
                q.push(u[0]);
            }
        }
    }
    return ans;
}


void shortPath(vector<vector<vector<int>>> adj,int s){
    vector<int> dist(adj.size(),INT_MAX);
    dist[s] = 0;
    vector<int> topSort = topoSort(adj);
    for(auto i:topSort){
        for(auto u:adj[i]){
            if(dist[u[0]]>dist[i]+u[1]){
                dist[u[0]] = dist[i]+u[1];
            }
        }
    }
    for(auto i:dist){
        cout<<i<<" ";
    }
}

int main(){
    vector<vector<vector<int>>> adj = {
        {{1,2},{4,1}},
        {{2,3}},
        {{3,6}},
        {},
        {{2,2},{5,4}},
        {{3,1}}
    };
    shortPath(adj,0);

    return 0;
}