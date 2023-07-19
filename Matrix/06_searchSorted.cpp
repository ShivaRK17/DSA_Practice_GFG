#include<bits/stdc++.h>
using namespace std;

void search(vector<vector<int>> v,int ans){
    int i = v.size()-1;
    int j = 0;
    while(i>=0 && i<v.size() && j>=0 && j<v[0].size()){
        if(ans==v[i][j]){
            cout<<i<<" "<<j<<endl;
            return;
        }
        else if(ans>v[i][j]){
            j++;
        }
        else{
            i--;
        }
    }
}

int main(){
    vector<vector<int>> v = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    search(v,41);
    return 0;
}