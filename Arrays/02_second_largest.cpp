#include<bits/stdc++.h>
using namespace std;

int secLarg(vector<int> a){
    int lar = INT_MIN;
    int sec = INT_MIN;
    for(auto i:a){
        if(i>lar){
            sec = lar;
            lar = i;
        }
        else if(i>sec && sec<lar){
            sec = i;
        }
    }
    cout<<lar<<" "<<sec<<endl;
    return sec;
}

int main(){
    vector<int> a = {9,2,5,1,7,12,9};
    cout<<secLarg(a);
    return 0;
}