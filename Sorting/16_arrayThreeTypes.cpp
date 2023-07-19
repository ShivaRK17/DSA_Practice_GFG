#include<bits/stdc++.h>
using namespace std;

void arraySort(vector<int> &v){
    int l = 0;
    int mid = 0;
    int h = v.size()-1;
    while(mid<=h){
        if(v[mid]==0){
            swap(v[l],v[mid]);
            l++;
            mid++;
        }
        else if(v[mid]==1){
            mid++;
        }
        else{
            swap(v[h],v[mid]);
            h--;
        }
    }
}

int main(){
    vector<int> v = {2,1,0,2,2,1,1,0,0,1,1};
    arraySort(v);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}