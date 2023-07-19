#include<bits/stdc++.h>
using namespace std;
int medianRowSorted(vector<vector<int>> v) {
    int r = v.size();
    int c = v[0].size();
    int mini = v[0][0];
    int maxi = v[0][c-1];
    for(int i = 0;i<r;i++){
        mini = min(mini,v[i][0]);
        maxi = max(maxi,v[i][c-1]);
    }
    int medpos = (r*c+1)/2;
    while(mini<maxi){
        int mid = (mini+maxi)/2;
        int midpos = 0;
        for(int i = 0;i<r;i++){
            // cout<<*upper_bound(v[i].begin(),v[i].end(),mid)<<endl;
            midpos+=upper_bound(v[i].begin(),v[i].end(),mid)-v[i].begin();
        }
        // cout<<midpos<<endl;
        if(midpos<medpos){
            mini = mid+1;
        }
        else{
            maxi = mid;
        }
    }
    return mini;
}

int main(){
    vector<vector<int>> v = {{5,10,20,30,40},{1,2,3,4,6},{11,13,15,17,19}};
    cout<<medianRowSorted(v);
    return 0;
}