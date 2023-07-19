#include<bits/stdc++.h>
using namespace std;

int largestEl(vector<int> a){
    int maxi = a[0];
    for(auto i:a){
        maxi = max(i,maxi);
    }
    return maxi;
}
int larg(int *arr){
    int maxi = arr[0];
    for(int i = 0;i<6;i++){
        maxi = max(arr[i],maxi);
    }
    return maxi;
}

int main(){
    vector<int> a = {9,2,5,1,7,12,9};
    int arr[] = {9,1,4,1,20,7};
    // cout<<largestEl(a);
    cout<<larg(arr);
    return 0;
}