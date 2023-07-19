#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &a){
    for(int i = 0;i<a.size()/2;i++){
        swap(a[i],a[a.size()-1-i]);
    }
}

int main(){
    vector<int> a = {2,3,5,7,9,45,56,67,80};
    reverseArray(a);
    for(auto i:a){
        cout<<i<<" ";
    }
    return 0;
}