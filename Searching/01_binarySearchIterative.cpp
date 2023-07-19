#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v,int key){
    int low = 0;
    int high = v.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid]==key){
            return mid;
        }
        else if(v[mid]>key){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}

int main(){
    vector<int> v= {10,20,30,40,50,60,70};
    cout<<binarySearch(v,10);
    return 0;
}