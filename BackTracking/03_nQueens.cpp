#include<bits/stdc++.h>
using namespace std;

bool isSafe(int n,vector<vector<int>> v,int row,int col){
    for(int i = 0;i<col;i++){
        if(v[row][i]) return false;
    }
    for(int i = row,j=col;i>=0 && j>=0;i--,j--){
        if(v[i][j]) return false;
    }
    for(int i = row,j=col;i<n && j>=0;i++,j--){
        if(v[i][j]) return false;
    }
    return true;
}

bool solveRec(int n,vector<vector<int>> &v,int col){
    if(col==n) return true;
    for(int i = 0;i<n;i++){
        if(isSafe(n,v,i,col)){
            v[i][col] = 1;
            if(solveRec(n,v,col+1)) return true;
            v[i][col] = 0;
        }
    }
    return false;
}

bool solve(int n,vector<vector<int>> &v){
    return solveRec(n,v,0);
}

int main(){
    int n = 4;
    vector<int> temp(n,0);
    vector<vector<int>> v(n,temp);
    solve(n,v);
    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}