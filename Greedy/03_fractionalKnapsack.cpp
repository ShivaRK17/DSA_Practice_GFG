#include<bits/stdc++.h>
using namespace std;

bool mycmp(pair<int,int> p1,pair<int,int> p2){
    return (float(p1.second)/float(p1.first))>(float(p2.second)/float(p2.first));
}

int fracKnapsack(vector<pair<int,int>> v,int cap){
    sort(v.begin(),v.end(),mycmp);
    int ans = 0;
    for(int i = 0;i<v.size();i++){
        auto curr = v[i];
        if(cap>curr.first){
            cap-=curr.first;
            ans+=curr.second;
        }
        else if(cap>0){
            float frac = float(cap)/float(curr.first);
            ans+=(frac*curr.second);
            cap = 0;
        }
        else{
            break;
        }
        // cout<<ans<<endl;
    }
    return ans;
}


int main(){
    // vector<pair<int,int>> v = {
    //     {50,600},{20,500},{30,400}
    // };
    vector<pair<int,int>> v = {
        {30,120},{20,100},{10,60}
    };
    cout<<fracKnapsack(v,50);
    return 0;
}