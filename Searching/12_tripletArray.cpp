#include<bits/stdc++.h>
using namespace std;

bool isSum(vector<int> v,int x){
    int n = v.size();
    for(int k = 0;k<n-2;k++){
        int i = k+1;
        int j= n-1;
        while(i<j){
            if(v[i]+v[j]+v[k]==x){
                cout<<k<<" "<<i<<" "<<j<<" are indices\n";
                return true;
            }
            else if(v[i]+v[j]>x-v[k]){
                j = j-1;
            }
            else{
                i++;
            }
        }
    }
    return false;
}

int main(){
    vector<int> v = {2,3,4,8,9,20,40};
    cout<<isSum(v,9);
    return 0;
}