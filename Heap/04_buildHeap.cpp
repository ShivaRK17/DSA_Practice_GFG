#include<bits/stdc++.h>
using namespace std;

void minheapify(vector<int> &v,int curr){
    int left = 2*curr +1;
    int right = 2*curr +2;
    int small = curr;
    if(left<v.size() && v[left]<v[small]) small = left;
    if(right<v.size() && v[right]<v[small]) small = right;
    if(small!=curr){
        swap(v[small],v[curr]);
        minheapify(v,small);
    }
}

void buildHeap(vector<int> &v){
    int botright = (v.size()-2)/2;
    for(int i = botright;i>=0;i--){
        minheapify(v,i);
    }
}

int main(){
    vector<int> v = {10,5,20,2,4,8};
    buildHeap(v);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}