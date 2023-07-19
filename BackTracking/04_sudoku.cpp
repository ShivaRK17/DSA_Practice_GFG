#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> v,int i,int j,int x){
    for(int k = 0;k<v.size();k++){
        if(v[i][k]==x || v[k][j]==x){
            return false;
        }
    }
    int s = sqrt(v.size());
    int rs = i-(i%s);
    int cs = j-(j%s);
    for(int i = 0;i<s;i++){
        for(int j = 0;j<s;j++){
            if(v[i+rs][j+cs]==x){
                return false;
            }
        }
    }
    return true;
}

bool solve(vector<vector<int>> &v){
    int n = v.size();
    int i,j;
    bool cut = true;
    for(i = 0;i<n;i++){
        for(j = 0;j<n;j++){
            if(v[i][j]==0){
                cut = false;
                break;
            }
        }
        if(!cut) break;
    }
    // if(cut) return true;
    if(i==n && j==n) return true;
    for(int x = 1;x<=n;x++){
        if(isSafe(v,i,j,x)){
            v[i][j] = x;
            if(solve(v)) return true;
            v[i][j] = 0;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> v = {
        {1,0,3,0},
        {0,0,2,1},
        {0,1,0,2},
        {2,4,0,0}
    };
    solve(v);
    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}