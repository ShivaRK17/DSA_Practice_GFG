#include<bits/stdc++.h>
using namespace std;

int lcsNaive(string s1,string s2,int m,int n){
    if(m==0 || n==0 ) return 0; //Either one of string is empty
    if(s1[m-1]==s2[n-1]) return 1+lcsNaive(s1,s2,m-1,n-1); //Last chars of strings match
    return max(lcsNaive(s1,s2,m-1,n),lcsNaive(s1,s2,m,n-1));
}

int lcs(string s1,string s2,int m ,int n,vector<vector<int>> &dp){
    if(dp[m][n]==-1){
        if(m==0 || n==0)
            dp[m][n] = 0;
        else{
            if(s1[m-1]==s2[n-1])
                dp[m][n] = 1+lcs(s1,s2,m-1,n-1,dp);
            else    
                dp[m][n] = max(lcs(s1,s2,m-1,n,dp),lcs(s1,s2,m,n-1,dp));
        }
    }
    return dp[m][n];
}

int main(){
    string a = "axyz";
    string b = "baz";
    // cout<<lcsNaive(a,b,4,3);
    int m = a.length();
    int n = b.length();
    vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
    cout<<lcs(a,b,m,n,dp)<<endl;
    return 0;
}