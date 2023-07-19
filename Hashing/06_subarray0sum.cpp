#include<bits/stdc++.h>
using namespace std;

bool subarray0sum(vector<int> v){
    unordered_map<int,int> m;
    int pref_sum = 0;
    for(auto i:v){
        pref_sum+=i;
        m[pref_sum]++;
        if(m[pref_sum]==2){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> v = {1,4,13,-3,-10,5};
    cout<<subarray0sum(v);
    return 0;
}