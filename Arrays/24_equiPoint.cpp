#include<bits/stdc++.h>
using namespace std;

bool isEquiExists(vector<int> v){
    vector<int> pre = {v[0]};
    for(int i = 1;i<v.size();i++){
        pre.push_back(v[i]+pre.back());
    }
    vector<int> post(v.size());
    post[v.size()-1] = v[v.size()-1];
    for(int i = v.size()-2;i>=0;i--){
        post[i] = post[i+1]+v[i];
    }
    for(auto i:post){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i= 0;i<v.size();i++){
        if(pre[i]==post[i]){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> v = {3,4,8,-9,20,6};
    cout<<isEquiExists(v);
    return 0;
}