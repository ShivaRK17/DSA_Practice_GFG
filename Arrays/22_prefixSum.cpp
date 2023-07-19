#include<bits/stdc++.h>
using namespace std;

vector<int> prefixSum(vector<int> v){
    vector<int> ans = {v[0]};
    for(int i = 1;i<v.size();i++){
        ans.push_back(v[i]+ans.back());
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return ans;
}

int getSum(vector<int> v,int i,int j){
    if(i==0){
        return v[j];
    }
    return v[j]-v[i-1];
}

int main(){
    vector<int> v = {2,8,3,9,6,5,4};
    vector<int> pref =  prefixSum(v);
    cout<<getSum(pref,0,2)<<endl;
    cout<<getSum(pref,1,3)<<endl;
    cout<<getSum(pref,2,6)<<endl;
    return 0;
}