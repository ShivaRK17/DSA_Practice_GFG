#include<bits/stdc++.h>
using namespace std;
vector<int> dp(100,-1);
int fibonacci(int n){
    if(dp[n]==-1){
        int res;
        if(n==0 || n==1){
            res = n;
        }
        else{
            res = fibonacci(n-1)+fibonacci(n-2);
        }
        dp[n] = res;
    }
    return dp[n];
}

int main(){
    int n = 10;
    cout<<fibonacci(10)<<endl;
    for(auto i:dp){
        cout<<i<<" ";
    }
    return 0;
}