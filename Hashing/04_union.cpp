#include<bits/stdc++.h>
using namespace std;

void unionArray(vector<int> a,vector<int> b){
    unordered_set<int> s(a.begin(),a.end());
    for(auto i:b){
        s.insert(i);
    }
    for(auto i:s){
        cout<<i<<endl;
    }
}

int main(){
    vector<int> a = {10,30,10,40};
    vector<int> b = {40,5,10,15};
    unionArray(a,b);
    return 0;
}