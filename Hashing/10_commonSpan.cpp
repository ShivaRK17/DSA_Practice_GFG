#include<bits/stdc++.h>
using namespace std;

int commonspan(vector<int> a,vector<int> b){
    vector<int> temp;
    for(int i = 0;i<a.size();i++){
        temp.push_back(a[i]-b[i]);
    }
    int pref = 0;
    int ans = 0;
    unordered_map<int,int> m;
    for(int i  = 0;i<temp.size();i++){
        pref+=temp[i];
        if(pref==0){
            ans = i+1;
        }
        if(m.find(pref)!=m.end()){
            ans = max(ans,i-m[pref]);
        }
        else{
            m[pref] = i;
        }
    }
    return ans;
}

int main(){
    vector<int> a = {0,1,0,0,0,0};
    vector<int> b = {1,0,1,0,0,1};
    cout<<commonspan(a,b);
    return 0;
}