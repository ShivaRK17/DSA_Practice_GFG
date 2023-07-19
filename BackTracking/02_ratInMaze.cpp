#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> v,int i,int j){
    int n = v.size();
    return (i<n && j<n && v[i][j]==1);
}

bool ratInMazeRec(vector<vector<int>> v,int i ,int j,vector<vector<int>> &sol){
    int n = v.size();
    if(i==n-1 && j==n-1){
        sol[i][j] = 1;
        return true;
    }
    if(isSafe(v,i,j)){
        sol[i][j] = 1;
        if(ratInMazeRec(v,i+1,j,sol)) return true;
        else if(ratInMazeRec(v,i,j+1,sol)) return true;
        sol[i][j] = 0;
    }
    return false;
}

bool ratInMaze(vector<vector<int>> v,vector<vector<int>> &sol){
    return ratInMazeRec(v,0,0,sol);
}

int main(){
    vector<vector<int>> v = {
        {1,0,0,0},
        {1,1,1,0},
        {0,1,0,0},
        {1,1,1,1},
    };
    vector<int> temp(v.size(),0);
    vector<vector<int>> sol(v.size(),temp);
    cout<<ratInMaze(v,sol)<<endl;
    for(auto i:sol){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}