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
void quickSort(vector<int> &v,int l,int h){
    if(l<h){
        int pivot = lomutoPart(v,l,h);
        quickSort(v,l,pivot-1);
        quickSort(v,pivot+1,h);
    }
}

int main(){
    vector<int> v = {5,4,7,2,9,12,1,3,2};
    quickSort(v,0,v.size()-1);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}