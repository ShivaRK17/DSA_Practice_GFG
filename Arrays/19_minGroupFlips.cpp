#include<bits/stdc++.h>
using namespace std;

void minGroupFlips(vector<int> v){
    int st = v[0];
    for(int i = 1;i<v.size();i++){
        if(v[i]!=v[i-1]){
            if(v[i]!=st){
                cout<<"From "<<i<<" to ";
            }
            else{
                cout<<i-1<<endl;
            }
        }
    }
    if(v[v.size()-1]!=st){
        cout<<v.size()-1<<endl;
    }
}

int main(){
    vector<int> v = {1,1,0,0,0,1,1,0,1,0};
    minGroupFlips(v);
    return 0;
}