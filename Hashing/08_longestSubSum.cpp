#include<bits/stdc++.h>
using namespace std;

int givenSum(vector<int> v,int sum){
    int ans = 0;
    int pref_sum = 0;
    unordered_map<int,int> m;
    for(int i = 0;i<v.size();i++){
        pref_sum+=v[i];
        if(pref_sum==sum){
            ans = i+1;
        }
        if(m.find(pref_sum)==m.end()){
            m.insert({pref_sum,i});
        }
        if(m.find(pref_sum-sum)!=m.end()){
            ans = max(ans,i-m[pref_sum-sum]);
        }
    }
    return ans;
}

int main(){
    vector<int> v ={5,8,6,13,3,-1};
    cout<<givenSum(v,19);
    return 0;
}