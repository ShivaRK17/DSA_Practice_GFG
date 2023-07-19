#include <bits/stdc++.h>
using namespace std;

vector<int> djikstra(vector<vector<int>> v,int s){
    int n = v.size();
    vector<int> dist(n,INT_MAX);
    vector<int> fin(n,false);
    dist[s] = 0; //Distance of self is zero

    for(int count = 0;count < n;count++){
        int u = -1;
        //Set up minimum of dist array
        for(int i = 0;i<n;i++){
            if(!fin[i] && (u==-1 || dist[i]<dist[u])){
                u = i;
            }
        }
        //Finalise the obtained u
        fin[u] = true;
        //Set minimum distances
        for(int i= 0;i<n;i++){
            if(!fin[i] && v[u][i]!=0){
                dist[i] = min(dist[i],dist[u]+v[u][i]);
            }
        }
    }
    return dist;
}

int main(){
    vector<vector<int>> v = {
        {0, 4, 8, 0, 0, 0, 0, 0, 0},
        {4, 0,11, 8, 0, 0, 0, 0, 0},
        {8,11, 0, 0, 7, 1, 0, 0, 0},
        {0, 8, 0, 0, 2, 0, 7, 4, 0},
        {0, 0, 7, 2, 0, 6, 0, 0, 0},
        {0, 0, 1, 0, 6, 0, 0, 2, 0},
        {0, 0, 0, 7, 0, 0, 0,14, 9},
        {0, 0, 0, 4, 0, 2,14, 0,10},
        {0, 0, 0, 0, 0, 0, 9,10, 0}};

    vector<int> ans =  djikstra(v,0);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}