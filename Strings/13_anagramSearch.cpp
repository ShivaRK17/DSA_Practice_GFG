#include<bits/stdc++.h>
using namespace std;

vector<int> anagramSearch(string a,string b){
    vector<int> ans;
    int n = a.length();
    int m = b.length();
    unordered_map<char,int> m1;
    unordered_map<char,int> m2;
    for(int i = 0;i<m;i++){
        m1[a[i]]++;
        m2[b[i]]++;
    }
    if(m1==m2){
        ans.push_back(0);
    }
    for(int i = m;i<n;i++){
        m1[a[i]]++;
        m1[a[i-m]]--;
        if(m1[a[i-m]]==0){
            m1.erase(a[i-m]);
        }
        if(m1==m2){
            ans.push_back(i-m+1);
        }
    }
    return ans;
}

int main(){
    string a = "geeksforgeeks";
    string b = "frog";
    vector<int> ans = anagramSearch(a,b);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}