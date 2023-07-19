#include<bits/stdc++.h>
using namespace std;

void shortPathUnweight(vector<vector<int>> v,int s){
    vector<int> dist(v.size(),INT_MAX);
    dist[s] = 0;
    queue<int> q;
    vector<bool> vis(v.size(),0);
    q.push(s);
    vis[s] = true;
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(auto i:v[curr]){
            if(!vis[i]){
                vis[i] = true;
                dist[i] = dist[curr]+1;
                q.push(i);
            }
        }
    }
    for(auto i:dist){
        cout<<i<<" ";
    }
}

int main(){
    vector<vector<int>> v = {
        {1,2},
        {0,2,3},
        {0,1,3},
        {1,2},
    };
    shortPathUnweight(v,3);

    return 0;
}