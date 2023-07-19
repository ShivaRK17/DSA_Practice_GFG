#include<bits/stdc++.h>
using namespace std;

int lisDP(vector<int> arr){
    vector<int> dp(arr.size(),1);
    for(int i = 1;i<arr.size();i++){
        for(int j = 0;j<i;j++){
            if(arr[i]>arr[j]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
    int res = dp[0];
    for(int i=1;i<arr.size();i++){
        res = max(res,dp[i]);
    }
    return res;
}

int main(){
    vector<int> arr = {3,4,2,8,10};
    cout<<lisDP(arr)<<endl;
    return 0;
}