#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &v,int l,int h,int mid){
    vector<int> temp1(mid-l+1);
    vector<int> temp2(h-mid);
    int n = mid-l+1;
    int m = h-mid;
    for(int i= 0;i<n;i++){
        temp1[i] = v[l+i];
    }
    for(int i = 0;i<m;i++){
        temp2[i] = v[mid+i+1];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while(i<n && j<m){
        if(temp1[i]<temp2[j]){
            v[k++] =  temp1[i++];
        }
        else{
            v[k++] = temp2[j++];
        }
    }
    while(i<n){
        v[k++] =  temp1[i++];
    }
    while(j<m){
        v[k++] = temp2[j++];
    }
}

void mergeSort(vector<int> &v,int l,int h){
    if(h>l){
        int mid = l+(h-l)/2;
        mergeSort(v,0,mid);
        mergeSort(v,mid+1,h);
        merge(v,l,h,mid);
    }
}

int main(){
    // vector<int> v = {1,4,6,7,10,2,3,8,8,9};
    // merge(v,0,9,4);
    // for(auto i:v){
    //     cout<<i<<" ";
    // }

    vector<int> v = {12, 11, 13, 5, 6, 7 ,2,6,18,8,9};
    mergeSort(v,0,10);
    for(auto i:v){
        cout<<i<<" ";
    }
    
    return 0;
}