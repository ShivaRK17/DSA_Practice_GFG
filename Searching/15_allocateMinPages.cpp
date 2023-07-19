#include<bits/stdc++.h>
using namespace std;

bool isPoss(vector<int> v,int k,int mid){
    int pageSum = 0;
    int studCount = 1;
    for(int i = 0;i<v.size();i++){
        if(pageSum+v[i]<=mid){
            pageSum+=v[i];
        }
        else{
            studCount++;
            if(studCount>k){
                return false;
            }
            pageSum = v[i];
        }
    }
    return true;
}

int minPages(vector<int> v,int k){
    int maxel = v[0];
    int sum = 0;
    for(int i = 0;i<v.size();i++){
        maxel = max(maxel,v[i]);
        sum+=v[i];
    }

    int s = maxel;
    int e = sum;
    int mid = (s+e)/2;
    int ans = -1;
    while(s<=e){
        // cout<<mid<<endl;
        if(isPoss(v,k,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int main(){
       vector<int> v = {10,20,5,15,5};
       int k = 2;
       cout<<minPages(v,k);
    return 0;
}