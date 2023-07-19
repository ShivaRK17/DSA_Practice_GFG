#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v,int x){
    int l = 0;
    int h  = v.size()-1;
    int ans = -1;
    while(l<=h){
        int mid = (l+h)/2;
        if(v[mid]==x){
            ans = mid;
            l = mid+1;
        }
        else if(v[mid]>x){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> v = {10,20,20,30,30,30,30};
    cout<<binarySearch(v,30);
    return 0;
}