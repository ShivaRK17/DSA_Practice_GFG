#include<bits/stdc++.h>
using namespace std;

//Written by me
int longDisSub(string a){
    int n = a.length();
    int ans = 0;
    vector<int> maxEnd = {1};
    unordered_map<char,int> prevInd;
    prevInd.insert({a[0],0});
    for(int i = 1;i<n;i++){
        if(prevInd.find(a[i])==prevInd.end()){
            maxEnd.push_back(maxEnd.back()+1);
        }
        else{
            maxEnd.push_back(min(maxEnd.back()+1,i-prevInd[a[i]]));
        }
        ans = max(ans,maxEnd[i]);
        prevInd[a[i]]= i;
    }
    return ans;
}

//Code in GFG
int longDisSubString(string a){
    int n = a.length();
    int ans = 0;
    vector<int> prevInd(256,-1);
    int i = 0;
    for(int j = 0;j<n;j++){
        i = max(i,prevInd[a[j]]+1);
        int maxEnd = j-i+1;
        ans = max(ans,maxEnd);
        prevInd[a[j]] = j;
    }
    return ans;
}

int main(){
    string a = "abba";
    // cout<<longDisSub(a);
    cout<<longDisSubString(a);
    return 0;
}