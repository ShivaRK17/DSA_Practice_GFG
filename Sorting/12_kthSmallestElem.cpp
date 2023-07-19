#include<bits/stdc++.h>
using namespace std;

int lomutoPart(vector<int> &v,int l,int h){
    int piv = v[h];
    int i = l-1;
    for(int j = l;j<h;j++){
        if(v[j]<piv){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[h]);
    return i+1;
}
int kthSmall(vector<int> &v,int k){
    int low = 0;
    int high = v.size()-1;
    while(low<=high){
        int p = lomutoPart(v,low,high);
        if(p==(k-1)){
            return v[p];
        }
        else if(p>(k-1)){
            high = p-1;
        }
        else{
            low = p+1;
        }
    }
    return -1;
}

int main(){
    vector<int> v = {3,10,11,13,8,2};
    cout<<kthSmall(v,3);
    return 0;
}