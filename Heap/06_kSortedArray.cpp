#include<bits/stdc++.h>
using namespace std;


void kSort(vector<int> &v,int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i= 0;i<=k;i++){
        pq.push(v[i]);
    }
    int index = 0;
    for(int i =  k+1;i<v.size();i++){
        v[index++] = pq.top();
        pq.pop();
        pq.push(v[i]);
    }
    while(!pq.empty()){
        v[index++] = pq.top();
        pq.pop();
    }
}

int main(){
    vector<int> v = {9,8,7,18,19,17};
    int k = 2;
    kSort(v,k);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}