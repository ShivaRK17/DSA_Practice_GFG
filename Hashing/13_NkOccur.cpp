#include<bits/stdc++.h>
using namespace std;

void countNK(vector<int> v,int k){
    float s = float(v.size())/float(k);
    unordered_map<int,int> m;
    for(auto i:v){
        m[i]++;
    }
    for(auto i:m){
        if(i.second>s){
            cout<<i.first<<" ";
        }
    }
}

void countNK2(vector<int> v,int k){ //moore voting algo
    float s = float(v.size())/float(k);
    unordered_map<int,int> m;
    for(auto i:v){
        if(m.find(i)!=m.end()){
            m[i]++;
        }
        else if(m.size()<k){
            m[i]++;
        }
        else{
            for(auto i:m){
                i.second--;
                if(i.second==0){
                    m.erase(i.first);
                }
            }
        }
    }
    for(auto i:m){
        if(i.second>s){
        cout<<i.first<<" ";
        }
    }
}

int main(){
    vector<int> v = {30,10,20,20,10,20,30,30};
    // countNK(v,4);
    countNK2(v,4);
    return 0;
}