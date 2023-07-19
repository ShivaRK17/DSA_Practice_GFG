#include<bits/stdc++.h>
using namespace std;

int coinNaive(vector<int> v,int n,int s){
    if(s==0) return 1;
    if(s<0) return 0;
    if(n==0) return 0;
    return coinNaive(v,n,s-v[n-1])+coinNaive(v,n-1,s);
}

int coinChange(vector<int> v,int n,int s){
    vector<vector<int>> dp(n+1,vector<int>(s+1,0));
    for(int i= 0;i<=n;i++){
        dp[i][0] = 1;
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=s;j++){
            if(v[i-1]>j){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j]+dp[i][j-v[i-1]];
            }
        }
    }
    for(auto i:dp){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return dp[n][s];
}

int main(){
    vector<int> v = {2,5,3};
    // cout<<coinNaive(v,3,5)<<endl;
    // cout<<coinChange(v,3,5)<<endl;
    cout<<coinChange({1,2,3},3,4)<<endl;
    return 0;
}