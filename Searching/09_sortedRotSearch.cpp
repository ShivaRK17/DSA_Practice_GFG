#include<bits/stdc++.h>
using namespace std;

int rotSearch(vector<int> v,int x){
    int l = 0;
    int h = v.size()-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(v[mid]==x) return mid;
        else if(v[mid]>=v[l]){ //left vala sorted
            if(v[l]<=x && x<v[mid]) h = mid-1;
            else if(v[l]==x) return l;
            else l = mid+1;
        }
        else{ //right wala sorted
            if(v[mid]<=x && x<v[h]) l = mid+1;
            else if(v[h]==x) return h;
            else h = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> v = {10,20,30,40,50,8,9};
    cout<<rotSearch(v,9);
    return 0;
}