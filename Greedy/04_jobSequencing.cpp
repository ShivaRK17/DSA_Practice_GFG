#include<bits/stdc++.h>
using namespace std;

bool mycmp(pair<int,int> p1,pair<int,int> p2){
    return p1.second>p2.second;
}

int jobSequence(vector<pair<int,int>> v){
    sort(v.begin(),v.end(),mycmp);
    int n = v.size();
    vector<bool> slots(n,false);
    int ans = 0;
    auto curr = v[0];
    for(int i = 0;i<n;i++){
        for(int j = min(n,v[i].first)-1;j>=0;j--){
            if(slots[j]==false){
                ans+=v[i].second;
                slots[j] = true;
                break;
            }
        }
    }
    return ans;
}

int main(){
    vector<pair<int,int>> v = {
        // {4,70},{1,80},{1,30},{1,100}
        {4,50},{1,5},{1,20},{5,10},{5,80}
    };
    cout<<jobSequence(v);
    return 0;
}