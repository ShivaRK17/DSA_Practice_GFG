#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v,int x,int l,int h){
    if(h<l){
        return -1;
    }
    int mid = (l+h)/2;
    if(v[mid]==x){
        return mid;
    }
    else if(v[mid]<x){
        return binarySearch(v,x,mid+1,h);
    }
    else{
        return binarySearch(v,x,l,mid-1);
    }
}

int main(){
     vector<int> v= {10,20,30,40,50,60,70};
    cout<<binarySearch(v,10,0,v.size()-1);
    return 0;
}