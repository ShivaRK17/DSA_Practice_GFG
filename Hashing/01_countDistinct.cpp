#include<bits/stdc++.h>
using namespace std;

int distinctSize(vector<int> v){
    unordered_set<int> s(v.begin(),v.end());
    return s.size();
}

int main(){
    vector<int> v = {12,15,12,12,15,13,17,13};
    cout<<distinctSize(v);
    return 0;
}