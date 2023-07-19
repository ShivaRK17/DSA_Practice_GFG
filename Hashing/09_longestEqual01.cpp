#include<bits/stdc++.h>
using namespace std;

int longestSub01(vector<int> v){
    for(int i = 0;i<v.size();i++){
        v[i]=v[i]==0?-1:1;
    }
    int pref = 0;
    int ans = 0;
    unordered_map<int,int> m;
    for(int i = 0;i<v.size();i++){
        pref+=v[i];
        // m[pref] = i;
        if(pref==0){
            ans = i+1;
        }
        if(m.find(pref)!=m.end()){
            ans = max(ans,i-m[pref]);
        }
        else{
            m[pref] = i;
        }
    }
    return ans;
}

int main(){
    vector<int>v = {1,0,1,1,1,0,0};
    cout<<longestSub01(v);
    // 1 -1 1 1 1 -1 -1
    // 1 0 1 2 3 2 1
    return 0;
}