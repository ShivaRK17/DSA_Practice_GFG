#include<bits/stdc++.h>
using namespace std;

void leaders(vector<int> a){
    int curr = a[a.size()-1];
    cout<<curr<<" ";
    for(int i = a.size()-1;i>=0;i--){
        if(curr<a[i]){
            cout<<a[i]<<" ";
            curr = a[i];
        }
    }
}

int main(){
    vector<int> a = {7,10,4,3,6,5,2};
    leaders(a);
    return 0;
}