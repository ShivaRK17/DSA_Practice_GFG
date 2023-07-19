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

int bsearch(vector<int> v,int x){
    if(v[0]==x) return 0;
    int i = 1;
    while(v[i]<x){
        i = i*2;
    }
    if(v[i]==x) return i;
    return binarySearch(v,x,(i/2)+1,i-1);
}

int main(){
    vector<int> v= {10,20,30,40,50,60,70,80,90,100,110,120};
    cout<<bsearch(v,60);
    return 0;
}