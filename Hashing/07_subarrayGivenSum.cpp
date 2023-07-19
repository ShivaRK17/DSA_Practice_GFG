#include<bits/stdc++.h>
using namespace std;

bool givenSum(vector<int> v,int sum){
    int pref_sum = 0;
    unordered_map<int,int> m;
    for(auto i:v){
        pref_sum+=i;
        m[pref_sum]++;
        if(m[pref_sum-sum]==1){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> v ={5,8,6,13,3,-1};
    cout<<givenSum(v,22);
    return 0;
}