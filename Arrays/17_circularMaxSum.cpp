#include<bits/stdc++.h>
using namespace std;

int kadaneSum(vector<int> v){
    int curr = v[0];
    int ans = v[0];
    for(int i = 1;i<v.size();i++){  
        curr = max(v[i],curr+v[i]);
        ans = max(curr,ans);
    }
    return ans;
}
int circSum(vector<int> v){
    int sumi = accumulate(v.begin(),v.end(),0);
    for(int i = 0;i<v.size();i++){
        v[i] = -v[i]; 
    }
    int kadanes = kadaneSum(v);
    return sumi-(-kadanes);
}
int MaxCircSum(vector<int> v){
    int ksum = kadaneSum(v);
    int csum = circSum(v);
    // cout<<ksum<<endl;
    // cout<<csum<<endl;
    // cout<<max(ksum,csum)<<endl;

    if(ksum<0){ //important
        return ksum;
    }
    else{
        return max(ksum,csum);
    }
}

int main(){
    vector<int> v = {5,-2,3,4};
    cout<<"Ans is "<<MaxCircSum(v);
    return 0;
}