#include<bits/stdc++.h>
using namespace std;

void freqArray(vector<int> a){
    int curr = a[0];
    int i = 1;
    int freq = 1;
    while(i<a.size()){
        if(curr!=a[i]){
            cout<<curr<<":"<<freq<<endl;
            curr = a[i];
            freq=1;
        }
        else{
            freq++;
        }
        i++;
    }
    cout<<curr<<":"<<freq<<endl;
}

int main(){
    vector<int> a = {10,10,10,25,30,30,50};
    freqArray(a);
    return 0;
}