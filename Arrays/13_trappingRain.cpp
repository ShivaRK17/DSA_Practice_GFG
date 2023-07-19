#include<bits/stdc++.h>
using namespace std;

int trappingRain(vector<int> v){
    int ans = 0;
    int lmax[v.size()];
    int rmax[v.size()];
    lmax[0] = v[0];
    rmax[v.size()-1] = v[v.size()-1];
    for(int i= 1;i<v.size();i++){
        lmax[i] = max(v[i],lmax[i-1]);
    }
    for(int i = v.size()-2;i>=0;i--){
        rmax[i] = max(rmax[i+1],v[i]);
    }

    for(int i = 0;i<v.size();i++){
        ans+=(min(lmax[i],rmax[i])-v[i]);
    }
    return ans;
}

int main(){
    vector<int> v = {3,0,1,2,5};
    cout<<trappingRain(v);
    return 0;
}