#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> a,vector<int> b){
    int n = a.size();
    int m = b.size();

    int i =0;
    int j = 0;
    int k = 0;
    vector<int> ans(n+m);
    while(i<n && j<m){
        if(a[i]<b[j]){
            ans[k] = a[i];
            i++;
            k++;
        }
        else{
            ans[k++] = b[j++];
        }
    }
    while(i<n){
        ans[k++] = a[i++];
    }
    while(j<m){
        ans[k++] = b[j++];
    }
    return ans;
}

int main(){
    vector<int> a = {1,2,5,7,10};
    vector<int> b = {1,3,4,6,9,11,23};
    vector<int> c = merge(a,b);
    for(auto i:c){
        cout<<i<<" ";
    }
    return 0;
}