#include<bits/stdc++.h>
using namespace std;

int edNaive(string a,string b,int m ,int n){
    if(m==0) return n;
    if(n==0) return m;
    if(a[m-1]==b[n-1]){
        return edNaive(a,b,m-1,n-1);
    }
    return 1+min(edNaive(a,b,m-1,n),min(edNaive(a,b,m,n-1),edNaive(a,b,m-1,n-1)));
}

int ed(string a,string b,int m,int n){
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    for(int i = 1;i<=m;i++){
        dp[i][0] = i;
    }
    for(int i = 1;i<=n;i++){
        dp[0][i] = i;
    }
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = 1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
            }
        }
    }
    for(auto i:dp){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return dp[m][n];
}

int main(){
    string a = "CAT";
    string b = "CUT";
    int m = a.length();
    int n = b.length();
    // cout<<edNaive(a,b,m,n)<<endl;
    cout<<ed(a,b,m,n)<<endl;
    return 0;
}