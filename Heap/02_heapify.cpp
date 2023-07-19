#include<bits/stdc++.h>
using namespace std;

void minheapify(vector<int> &v,int curr){
    int left = ((2*curr)+1);
    int right = ((2*curr)+2);
    int small = curr;
    if(left<v.size() && v[left]<v[small]) small = left;
    if(right<v.size() && v[right]<v[small]) small = right;
    if(curr!=small){
        swap(v[curr],v[small]);
        minheapify(v,small);
    }
}

int extractMin(vector<int> &v){
    int size = v.size();
    if(size==0){
        return -1;
    }
    else if(size==1){
        return v[0];
    }
    int ans = v[0];
    swap(v[0],v[--size]);
    minheapify(v,0);
    return ans;
}

int main(){
    vector<int> arr = {40,20,30,35,25,80,32,100,70,60};
    minheapify(arr,0);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<extractMin(arr)<<endl;
    for(auto i:arr){
        cout<<i<<" ";
    }

    return 0;
}