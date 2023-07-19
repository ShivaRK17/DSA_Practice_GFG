#include<bits/stdc++.h>
using namespace std;

int peakEl(vector<int> v){
    int n = v.size();
    int l =0;
    int h = n-1;
    if(n==1){
        return 0;
    }
    while(l<=h){
        int mid = (l+h)/2;
        if((mid==0 || v[mid-1]<=v[mid]) && (mid==n-1 || v[mid+1]<=v[mid])){
            return mid;
        }
        if(mid>0 && v[mid-1]>=v[mid]){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return l;
}

int main(){
    vector<int> v = {10,5,10,30,40,60};
    cout<<peakEl(v);
    return 0;
}