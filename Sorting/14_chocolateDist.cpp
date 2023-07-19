#include<bits/stdc++.h>
using namespace std;

int chocDistr(vector<int> v,int m){
    if(m>v.size()){
        return -1;
    }
    sort(v.begin(),v.end());
    int ans = INT_MAX;
    for(int i = 0;i<v.size()-m+1;i++){
        ans = min(ans,v[i+m-1]-v[i]);
    }
    return ans;
}

int main(){
    vector<int> v = {7,3,2,4,9,12,56};
    int m = 9;
    cout<<chocDistr(v,m);
    return 0;
}