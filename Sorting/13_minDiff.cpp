#include<bits/stdc++.h>
using namespace std;

int minDiff(vector<int> v){
    int ans = INT_MAX;
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size()-1;i++){
        ans = min(v[i+1]-v[i],ans);
    }
    return ans;
}

int main(){
    vector<int> v = {10,8,1,4};
    cout<<minDiff(v);
    return 0;
}