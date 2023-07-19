#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &v,int i,int j){
    while(i<=j){
        swap(v[i++],v[j--]);
    }
}

void leftRotate(vector<int> &v,int d){
    d = d%v.size();
    reverse(v,0,d-1);
    reverse(v,d,v.size()-1);
    reverse(v,0,v.size()-1);
}

int main(){
    vector<int> a = {2,3,0,5,0,9,0,0,67,80};
    leftRotate(a,3);
    for(auto i:a){
        cout<<i<<" ";
    }
    return 0;
}