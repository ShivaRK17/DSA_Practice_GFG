#include<bits/stdc++.h>
using namespace std;

int stockBuySell(vector<int> v){
    int ans = 0;
    for(int i = 1;i<v.size();i++){
        if(v[i]-v[i-1]>0){
            ans+=(v[i]-v[i-1]);
        }
    }
    return ans;
}

int stockBuySellRec(vector<int> v,int s,int e){
    if(e<=s){
        return 0;
    }
    int profit = 0;
    for(int i = s;i<e;i++){
        for(int j = i+1;j<=e;j++){
            if(v[j]>v[i]){
                int curr_prof = v[j]-v[i]+stockBuySellRec(v,s,i-1)+stockBuySellRec(v,j+1,e);
                profit = max(profit,curr_prof);
            }
        }
    }
    return profit;
}

int main(){
    vector<int> v = {1,5,3,1,2,8};
    cout<<stockBuySell(v);
    // cout<<stockBuySellRec(v,0,5);
    return 0;
}