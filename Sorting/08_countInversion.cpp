#include<bits/stdc++.h>
using namespace std;

int  merge(vector<int> &v,int l,int h,int mid){
    int n = mid-l+1;
    int m = h-mid;
    int res = 0;
    vector<int> temp1(n);
    vector<int> temp2(m);
    for(int i = 0;i<n;i++){
        temp1[i] = v[l+i];
    }
    for(int i = 0;i<m;i++){
        temp2[i] = v[mid+1+i];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while(i<n && j<m){
        if(temp1[i]<temp2[j]){
            v[k++] = temp1[i++];
        }
        else{
            v[k++] = temp2[j++];
            res = res+(n-i);
        }
    }
    while(i<n){
        v[k++] = temp1[i++];
    }
    while(j<m){
        v[k++] = temp2[j++];
    }
    return res;
}

int mergeSortInv(vector<int> &v,int l,int h){
    int res = 0;
    if(h>l){
        int mid = l+(h-l)/2;
        res+=mergeSortInv(v,l,mid);
        res+=mergeSortInv(v,mid+1,h);
        res+=merge(v,l,h,mid);
    }
    return res;
}

int main(){
    vector<int>v = {2,4,1,3,5};    
    cout<<mergeSortInv(v,0,v.size()-1);
    // for(auto i:v){
    //     cout<<i<<" ";
    // }
    return 0;
}