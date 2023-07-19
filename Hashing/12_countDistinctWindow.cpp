#include<bits/stdc++.h>
using namespace std;

void countDistinct(vector<int> v,int k){
    unordered_map<int,int> m;
    for(int i = 0;i<k;i++){
        m[v[i]]++;
    }
    cout<<m.size()<<endl;
    for(int i = k;i<v.size();i++){
        m[v[i]]++;
        m[v[i-k]]--;
        if(m[v[i-k]]==0){
            m.erase(v[i-k]);
        }
        cout<<m.size()<<endl;
    }
}

int main(){
    vector<int> v = {10,20,20,10,30,40,10};
    countDistinct(v,4);
    return 0;
}