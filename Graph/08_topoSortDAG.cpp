#include<bits/stdc++.h>
using namespace std;

void topoSort(vector<vector<int>> v){
    vector<int> indegree(v.size(),0);
    //Creating an indegree vector
    for(auto u:v){
        for(auto i:u){
            indegree[i]++;
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
        cout<<curr<<" ";
        //Traverse through it's adjacents
        for(auto u: v[curr]){
            //Reduce and check if indegree is zero
            indegree[u]--;
            if(indegree[u]==0){
                q.push(u);
            }
        }
    }
}

int main(){
    vector<vector<int>> v = {
        {1,2},
        {3},
        {3},
        {4,5},
        {},
        {}
    };
    topoSort(v);
    return 0;
}