#include<bits/stdc++.h>
using namespace std;

void decreaseKey(vector<int> &v,int i,int x){
    v[i] = x;
    while(i!=0 && v[i]<v[(i-1)/2]){
        swap(v[i],v[(i-1)/2]);
        i = (i-1)/2;
    }
}

int main(){
    vector<int> v = {10,20,40,80,100,70};
    decreaseKey(v,3,5);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}