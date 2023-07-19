#include<bits/stdc++.h>
using namespace std;

int minCoins(vector<int> coins,int sum){
    vector<int> dp(sum+1,INT_MAX);
    dp[0] = 0;
    for(int i = 1;i<=sum;i++){
        int res = INT_MAX;
        for(int j = 0;j<coins.size();j++){
            if(i-coins[j]>=0){
                res = min(res,dp[i-coins[j]]+1);
            }
        }
        dp[i] = res;
    }
    // for(auto i:dp){
    //     cout<<i<<" ";
    // }
    return dp[sum];
}

int main(){
    vector<int> coins = {25,10,5};
    cout<<minCoins(coins,30);
    // vector<int> coins = {3,4,1};
    // cout<<minCoins(coins,5);
    return 0;
}