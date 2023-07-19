#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &v){
    for(int i = 1;i<v.size();i++){
        int curr = v[i];
        int j = i-1;
        while(j>=0 && v[j]>curr){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = curr;
    }
}

int main(){
    vector<int> v = {12,10,5,3,9,2,0,1,10};
    insertionSort(v);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}
//10 12 11