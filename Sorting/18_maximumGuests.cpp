#include<bits/stdc++.h>
using namespace std;

int maxGuests(vector<int> a,vector<int> d){
    int n = a.size();
    sort(a.begin(),a.end());
    sort(d.begin(),d.end());
    int maxg = 1;
    int curr = 1;
    int i = 1,j=0;
    while(i<n && j<n){
        if(a[i]<=d[j]){
            curr++;
            i++;
        }
        else{
            curr--;
            j++;
        }
        maxg = max(curr,maxg);
    }
    return maxg;
}

int main(){
    vector<int> a = {900,600,700};
    vector<int> d = {1000,800,730};
    cout<<maxGuests(a,d);
    return 0;
}