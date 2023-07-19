#include<bits/stdc++.h>
using namespace std;

bool isPairSum(vector<int> v,int sum){
    unordered_map<int,int> m;
    for(auto i:v){
        if(m[sum-i]>0){
            return true;
        }
        m[i]++;
    }
    return false;
}

int main(){
    vector<int> v = {3,2,8,15,-8};
    cout<<isPairSum(v,6);
    return 0;
}