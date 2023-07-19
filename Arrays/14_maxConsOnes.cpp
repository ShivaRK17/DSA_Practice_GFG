#include<bits/stdc++.h>
using namespace std;

int maxConsOnes(vector<int> v){
    int ans = 0;
    int curr = 0;
    for(int i = 0;i<v.size();i++){
        if(v[i]==1){
            curr++;
            ans = max(ans,curr);
        }
        else{
            curr = 0;
        }
    }
    return ans;
}

int main(){
    vector<int> v = {1,0,1,1,1,1,0,1,1};
    cout<<maxConsOnes(v);
    return 0;
}