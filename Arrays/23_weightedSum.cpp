#include<bits/stdc++.h>
using namespace std;

vector<int> prefixSum(vector<int> v){
    vector<int> ans = {v[0]};
    for(int i = 1;i<v.size();i++){
        ans.push_back(v[i]+ans.back());
    }
    return ans;
}

vector<int> weightSum(vector<int> v){
    vector<int> ans = {0};
    for(int i = 1;i<v.size();i++){
        ans.push_back(((i)*v[i])+ans.back());
    }
    return ans;
}

int main(){
    vector<int> v = {2,3,5,4,6,1};
    vector<int> wPrefSum = weightSum(v);
    vector<int> prefSum = prefixSum(v);

    int l = 2;
    int r = 3;

    int ans1 = (l==0)?wPrefSum[r]:wPrefSum[r]-wPrefSum[l-1];
    int ans2 = (l==0)?prefSum[r]:prefSum[r]-prefSum[l-1];
    int ans = ans1-ans2*(l-1);
    cout<<ans;

    return 0;
}