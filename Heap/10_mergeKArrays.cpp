#include <bits/stdc++.h>
using namespace std;

class Triplet{
    public:
    int val;
    int arrpos;
    int valpos;
    Triplet(int val,int a,int v){
        this->val = val;
        this->arrpos = a;
        this->valpos = v;
    }
};
class Mycmp{
    public:
    bool operator()(Triplet &t1,Triplet &t2){
        return t1.val>t2.val;
    }
};

vector<int> mergeK(vector<vector<int>>v){
    int n = v.size();
    int m = v[0].size();
    vector<int> ans;
    priority_queue<Triplet,vector<Triplet>,Mycmp> pq;
    for(int i = 0;i<n;i++){
        Triplet t(v[i][0],i,0);
        pq.push(t);
    }
    while(!pq.empty()){
        auto curr = pq.top();
        ans.push_back(curr.val);
        pq.pop();
        if(curr.valpos+1<m){
            Triplet t(v[curr.arrpos][curr.valpos+1],curr.arrpos,curr.valpos+1);
            pq.push(t);
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> v = {
        {5, 6, 10},
        {2, 7, 9},
        {1, 3, 5}};
    vector<int> ans = mergeK(v);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}