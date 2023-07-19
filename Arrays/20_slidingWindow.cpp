#include<bits/stdc++.h>
using namespace std;

int maxSumK(vector<int> v,int k){
    int curr = 0;
    for(int i = 0;i<k;i++){
        curr+=v[i];
    }
    int ans = curr;
    for(int i = k;i<v.size();i++){
        curr+=(v[i]-v[i-k]);
        ans = max(ans,curr);
    }
    return ans;
}

int main(){
    vector<int> v = {1,8,30,-5,20,7};
    cout<<maxSumK(v,3);
    return 0;
}