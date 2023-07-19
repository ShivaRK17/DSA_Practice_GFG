#include<bits/stdc++.h>
using namespace std;

int maxApp(vector<int> l,vector<int> r){
    vector<int> freq(101,0);
    for(int i = 0;i<l.size();i++){
        freq[l[i]]++;
        freq[r[i]+1]--;
    }
    for(int i = 1;i<freq.size();i++){
        freq[i]+=freq[i-1];
    }
    // int curr = 0;
    int ans = 0;
    for(int i =0;i<freq.size();i++){
        if(freq[i]>freq[ans]){
            ans = i;
        }
    }
    return ans;
}

int main(){
    vector<int> l = {1,2,5,15};
    vector<int> r = {5,8,7,18};
    cout<<maxApp(l,r);
    return 0;
}