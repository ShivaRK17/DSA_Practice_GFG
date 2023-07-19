#include<bits/stdc++.h>
using namespace std;

bool comp(vector<int> v1,vector<int> v2){
    return v1[0]<v2[0];
}

vector<vector<int>> mergeOverlap(vector<vector<int>> &v){
    sort(v.begin(),v.end(),comp);
    vector<vector<int>> ans = {v[0]};
    for(int i = 1;i<v.size();i++){
        vector<int> curr = v[i];
        if(curr[0]<=ans.back()[1]){
            ans.back()[0] = min(ans.back()[0],curr[0]);
            ans.back()[1] = max(ans.back()[1],curr[1]);
        }
        else{
            ans.push_back(curr);
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> v = {{1,3},{2,4},{5,7},{6,8}};
    v = mergeOverlap(v);
    for(auto i:v){
        cout<<i[0]<<" "<<i[1]<<endl;
    }
    return 0;
}