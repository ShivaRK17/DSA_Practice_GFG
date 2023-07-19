#include<bits/stdc++.h>
using namespace std;

int maxSumSubArray(vector<int> v){
    int ans = v[0];
    int curr = v[0];
    for(int i = 1;i<v.size();i++){
        curr = max(v[i],v[i]+curr);
        ans = max(ans,curr);
    }
    return ans;
}

int minSumSubArray(vector<int> v){
    int ans = v[0];
    int curr = v[0];
    for(int i = 1;i<v.size();i++){
        curr = min(v[i],curr+v[i]);
        ans = min(ans,curr);
    }
    return ans;
}

int main(){
    vector<int> v= {2,3,-8,7,-1,2,3};
    cout<<maxSumSubArray(v)<<endl;
    cout<<minSumSubArray(v)<<endl;
    return 0;
}