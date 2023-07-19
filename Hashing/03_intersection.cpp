#include<bits/stdc++.h>
using namespace std;

void intersection(vector<int> a,vector<int> b){
    unordered_map<int,int> m;
    for(auto i:a){
        if(m[i]==0){
            m[i]++;
        }
    }
    for(auto i:b){
        m[i]++;
        if(m[i]==2){
            cout<<i<<endl;
        }
    }
}

int main(){
    vector<int> a = {10,15,20,25,30,50};
    vector<int> b = {30,5,15,80};
    intersection(a,b);
    return 0;
}