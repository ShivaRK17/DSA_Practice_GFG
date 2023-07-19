#include<bits/stdc++.h>
using namespace std;

//Cycle in Directed Graph by Kahn Algo

bool isCycle(vector<vector<int>> v){
    vector<int> indegree(v.size(),0);
    //Creating an indegree vector
    for(auto u:v){
        for(auto i:u){
            indegree[i]++;
        }
    }
    //intialise count to 0;
    int count  = 0;
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
        count++;
        // cout<<curr<<" ";
        //Traverse through it's adjacents
        for(auto u: v[curr]){
            //Reduce and check if indegree is zero
            indegree[u]--;
            if(indegree[u]==0){
                q.push(u);
            }
        }
    }
    return (count!=v.size());
}

int main(){
    vector<vector<int>> v = {
        {1},
        {2},
        {3},
        {1},
        {1}
    };
    cout<<isCycle(v);
    return 0;
}