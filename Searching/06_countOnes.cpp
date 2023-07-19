#include<bits/stdc++.h>
using namespace std;


int lower(vector<int> v,int key){
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

int higher(vector<int> v,int x){
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

int countOnes(vector<int> v){
    int low = lower(v,1);
    if(low==-1){
        return 0;
    }
    else{
        return v.size()-low;
    }
}

int main(){
    vector<int> v = {0,0,0,0,1,1};
    cout<<countOnes(v);
    return 0;
}