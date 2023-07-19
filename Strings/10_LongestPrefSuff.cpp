#include<bits/stdc++.h>
using namespace std;

int LPSnaive(string a,int n){
    for(int len = n-1;len>0;len--){
        bool flag = false;
        for(int i= 0;i<len;i++){
            if(a[i]!=a[n-len+i]){
                flag = true;
                break;
            }
        }
        if(!flag){
            return len;
        }
    }
    return 0;
}

vector<int> LPS(string a){
    int n = a.length();
    vector<int> ans(n,0);
    int len = 0;
    int i = 1;
    while(i<n){
        if(a[i]==a[len]){
            len++;
            ans[i]=len;
            i++;
        }
        else{
            if(len==0){
                ans[i]= 0;
                i++;
            }
            else{
                len = ans[len-1];
            }
        }
    }
    return ans;
}

int main(){
    string a = "abcab";
    // for(int i = 0;i<a.length();i++){
    //     cout<<LPSnaive(a,i+1)<<" ";
    // }
    vector<int> lps = LPS(a);
    for(auto i:lps){
        cout<<i<<" ";
    }
    return 0;
}