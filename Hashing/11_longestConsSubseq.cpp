#include<bits/stdc++.h>
using namespace std;

int consseq(vector<int> v){
    unordered_set<int> s(v.begin(),v.end());
    int ans = 0;
    for(auto i:s){
        int curr = 1;
        if(s.find(i-1)==s.end()){
            while(s.find(i+curr)!=s.end()){
                curr++;
            }
            ans = max(curr,ans);
        }
    }
    return ans;
}

int main(){
    vector<int> v = {1,9,3,4,2,20};
    cout<<consseq(v);
    return 0;
}