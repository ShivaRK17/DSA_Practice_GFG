#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &v){
    for(int i = 0;i<v.size();i++){
        for(int j = i+1;j<v.size();j++){
            swap(v[i][j],v[j][i]);
        }
    }
}
void rotate90(vector<vector<int>> &v){
    transpose(v);
    for(int i =0;i<v.size();i++){
        int l = 0;
        int h = v.size()-1;
        while(l<h){
            swap(v[l++][i],v[h--][i]);
        }
    }
}


int main(){
    vector<vector<int>> v = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    rotate90(v);
    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}