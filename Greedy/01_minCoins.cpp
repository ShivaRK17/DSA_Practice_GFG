#include<bits/stdc++.h>
using namespace std;

int minCoins(vector<int> v,int am){
    sort(v.begin(),v.end(),greater<int>());
    int ans = 0;
    for(int i = 0;i<v.size();i++){
        if(v[i]<=am){
            int num = am/v[i];
            ans+=num;
            am = am - (num*v[i]);
        }
        if(am==0){
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> v = {10,5,2,1};
    cout<<minCoins(v,52);
    return 0;
}