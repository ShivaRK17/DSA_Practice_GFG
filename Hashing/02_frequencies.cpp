#include<bits/stdc++.h>
using namespace std;

void freq(vector<int> v){
    unordered_map<int,int> m;
    for(auto i:v){
        m[i]++;
    }
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}

int main(){
    vector<int> v = {12,15,12,12,15,13,17,13};
    freq(v);
    return 0;
}