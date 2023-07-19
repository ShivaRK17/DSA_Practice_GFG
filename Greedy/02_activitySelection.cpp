#include<bits/stdc++.h>
using namespace std;

bool myCmp(pair<int,int> v1,pair<int,int> v2){
    return v1.second<v2.second;
}

vector<pair<int,int>> actSel(vector<pair<int,int>> v){
    // Make an  empty ans
    vector<pair<int,int>> ans = {};
    // Sort it accoring to final time
    sort(v.begin(),v.end(),myCmp);
    // Add first pair
    ans.push_back(v[0]);
    for(int i = 1;i<v.size();i++){
        auto curr = v[i];
        // If next doesn't overlap, push it else ignore
        if(curr.first>=ans.back().second){
            ans.push_back(curr);
        }
    }
    return ans;
}

int main(){
    vector<pair<int,int>> v = {
        {3,8},{2,4},{1,3},{10,11}
    };
    vector<pair<int,int>> ans = actSel(v);
    for(auto i:ans){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}