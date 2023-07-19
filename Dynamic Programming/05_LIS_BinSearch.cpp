#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> arr,int l,int r,int x,int &ans){
    if(l>r){
        return;
    }
    int mid = (l+r)/2;
    if(arr[mid]==x){
        ans =  mid;
        return;
    }
    else if(arr[mid]>x){
        ans = mid;
        insert(arr,l,mid-1,x,ans);
    }
    else
        insert(arr,mid+1,r,x,ans);
}

int LIS(vector<int> arr){
    vector<int> lis;
    lis.push_back(arr[0]);
    for(int i = 1;i<arr.size();i++){
        int ans = -1;
        insert(lis,0,lis.size()-1,arr[i],ans);
        if(ans==-1){
            lis.push_back(arr[i]);
        }
        else{
            lis[ans] = arr[i];
        }
    }
    return lis.size();
}

int main(){
    vector<int> arr = {8,100,150,10,12,14,110};
    cout<<LIS(arr);
    return 0;
}