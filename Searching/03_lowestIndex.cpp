#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v,int key){
    int low = 0;
    int high = v.size()-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid]==key){
            ans = mid;
            high = mid-1;
        }
        else if(v[mid]>key){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> v= {10,40,40,40,50,60,70};
    cout<<binarySearch(v,40);
    return 0;
}