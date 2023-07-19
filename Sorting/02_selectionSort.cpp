#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v){
    for(int i = 0;i<v.size()-1;i++){
        int mini = i;
        for(int j = i+1;j<v.size();j++){
            if(v[mini]>v[j]){
                mini = j;
            }
        }
        swap(v[i],v[mini]);
    }
}

int main(){
    vector<int> v = {12,10,5,3,9,2,0,1,10};
    selectionSort(v);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}