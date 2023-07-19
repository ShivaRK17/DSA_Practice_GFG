#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v){
    for(int i = 0;i<v.size();i++){
        bool swapped = false;
        for(int j = 0;j<v.size()-i-1;j++){
            if(v[j]>v[j+1]){
                swapped = true;
                swap(v[j],v[j+1]);
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main(){
    vector<int> v = {12,10,5,3,9,2,0,1,10};
    bubbleSort(v);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}