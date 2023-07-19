#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> a){
    for(int i =0;i<a.size()-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> a = {2,3,5,7,9,45,56,67,80};
    cout<<isSorted(a);
    return 0;
}