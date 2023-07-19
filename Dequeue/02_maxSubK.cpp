#include<bits/stdc++.h>
using namespace std;

void maxOfSub(vector<int> v,int k){
    deque<int> q;
    q.push_back(0);
    for(int i = 0;i<k;i++){
        while(!q.empty() && v[q.back()]<=v[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    cout<<v[q.front()]<<" ";
    for(int i = k;i<v.size();i++){
        while(!q.empty() && v[q.back()]<=v[i]){
            q.pop_back();
        }
        if(!q.empty() && q.front()<=i-k){
            q.pop_front();
        }
        q.push_back(i);
        cout<<v[q.front()]<<" ";
    }
}

int main(){
    vector<int> v= {10,8,5,12,15,7,6};
    maxOfSub(v,3);
    return 0;
}