#include <bits/stdc++.h>
using namespace std;

int primSpan(vector<vector<int>> graph){
    int ans = 0;
    int v = graph.size();
    vector<int> key(v,INT_MAX);
    vector<bool> mSet(v,false);
    key[0] = 0;

    for(int count = 0;count<v;count++){
        int u = -1;
        for(int i = 0;i<v;i++){
            if(!mSet[i] && (u==-1 || key[i]<key[u])){ //Check if not in MST 
                u = i; //Setting the key index to minimum
            }
        }
        mSet[u] = true; // Add it in MST
        ans = ans+key[u];
        for(int i = 0;i<v;i++){
            if(graph[u][i]!=0 && !mSet[i]){ // Go to Adjacents and change to minimum if not in MST
                key[i] = min(key[i],graph[u][i]);
            }
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> v = {
        {0,  5,  8,  0},
        {5,  0, 10, 15},
        {8, 10,  0, 20},
        {0, 15, 20,  0}
    };
    cout<<primSpan(v);
    return 0;
}