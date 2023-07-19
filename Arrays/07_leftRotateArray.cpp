#include<bits/stdc++.h>
using namespace std;

void leftRotateOne(vector<int> &a){
    int temp = a[0];
    for(int i = 0;i<a.size()-1;i++){
        a[i] = a[i+1];
    }
    a[a.size()-1] = temp;
}

int main(){
    vector<int> a = {1,2,5,4,7};
    leftRotateOne(a);
    for(auto i:a){
        cout<<i<<" "; 
    }
    return 0;
}