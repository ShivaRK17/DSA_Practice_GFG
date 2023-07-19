#include<bits/stdc++.h>
using namespace std;

int minJumps(vector<int> v){
    int n = v.size();
    vector<int> dp(n+1,INT_MAX);
    dp[0] = 0;
    for(int i =1;i<n;i++){
        for(int j = 0;j<i;j++){
            if(v[j]+j>=i){
                if(dp[j]!=INT_MAX){
                    dp[i] = min(dp[i],dp[j]+1);
                }
            }
        }
    }
    return dp[n-1];
}

int main(){
    vector<int> v = {3,4,2,1,2,1};
    cout<<minJumps(v);
    return 0;
}