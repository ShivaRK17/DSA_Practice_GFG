#include<bits/stdc++.h>
using namespace std;

int maxItems(vector<int> v,int sum){
    int ans = 0;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(auto i:v){
        pq.push(i);
    }
    while(pq.top()<=sum){
        sum-=pq.top();
        ans++;
        pq.pop();
    }
    return ans;
}

int main(){
    vector<int> v = {1,12,5,111,200};
    cout<<maxItems(v,10);
    return 0;
}