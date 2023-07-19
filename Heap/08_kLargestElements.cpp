#include<bits/stdc++.h>
using namespace std;

void kLarge(vector<int> v,int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i = 0;i<k;i++){
        pq.push(v[i]);
    }
    for(int i = k;i<v.size();i++){
        if(v[i]>pq.top()){
            pq.pop();
            pq.push(v[i]);
        }
    }
    while (!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
}

int main(){
    vector<int> v = {5,15,10,20,8};
    kLarge(v,3);
    return 0;
}