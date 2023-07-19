#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {2,3,0,5,0,9,0,0,67,80};
    int count  = 0;
    for(int i = 0;i<a.size();i++){
        if(a[i]!=0){
            swap(a[i],a[count]);
            count++;
        }
    }
    for(auto i:a){
        cout<<i<<" ";
    }
    return 0;
}