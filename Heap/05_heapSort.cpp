#include<bits/stdc++.h>
using namespace std;

void maxheapify(vector<int> &v,int n,int i){
    int left = 2*i + 1;
    int right = 2*i + 2;
    int large = i;
    if(left<n && v[left]>v[large]) large = left;
    if(right<n && v[right]>v[large]) large = right;
    if(large!=i){
        swap(v[i],v[large]);
        maxheapify(v,n,large);
    }
}

void buildHeap(vector<int> &v,int n){
    for(int i = (n-2)/2;i>=0;i--){
        maxheapify(v,n,i);
    }
}

void heapSort(vector<int> &v,int n){
    buildHeap(v,n);
    for(int i = n-1;i>=1;i--){
        swap(v[0],v[i]);
        maxheapify(v,i,0);
    }
}

int main(){
    vector<int> v = {5,4,9,2,6,10,3};
    heapSort(v,v.size());
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}