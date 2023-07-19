#include<bits/stdc++.h>
using namespace std;

int ropeCut(int n,int a,int b,int c){
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    int res = max(ropeCut(n-a,a,b,c),max(ropeCut(n-b,a,b,c),ropeCut(n-c,a,b,c)));
    if(res==-1){
        return -1;
    }
    return res+1;
}

int main(){
    cout<<ropeCut(23,12,9,11);
    return 0;
}