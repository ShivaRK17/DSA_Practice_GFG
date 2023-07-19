#include<bits/stdc++.h>
using namespace std;

void kClose(vector<int> v,int k,int x){
    priority_queue<pair<int,int>> pq;
    for(int i = 0;i<k;i++){
        pq.push({abs(v[i]-x),i});
    }
    for(int i = k;i<v.size();i++){
        int curr = abs(v[i]-x);
        if(curr<pq.top().first){
            pq.pop();
            pq.push({curr,i});
        }
    }
    while(!pq.empty()){
        cout<<v[pq.top().second]<<" ";
        pq.pop();
    }
}

int main(){
    vector<int> v = {10,15,7,3,4};
    kClose(v,2,8);
    return 0;
}