#include<bits/stdc++.h>
using namespace std;

void ceilLeft(vector<int> v){
    cout<<-1<<" ";
    set<int> s;
    for(int i= 1;i<v.size();i++){
        if(s.lower_bound(v[i])!=s.end()){
            cout<<*s.lower_bound(v[i])<<" ";
        }
        else{
            cout<<-1<<" ";
        }
        s.insert(v[i]);
    }
}

int main(){
    vector<int> v = {2,8,30,15,25,12};
    ceilLeft(v);
    return 0;
}