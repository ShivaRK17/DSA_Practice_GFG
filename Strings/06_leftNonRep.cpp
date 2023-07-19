#include<bits/stdc++.h>
using namespace std;

int leftNonRep(string s){
    unordered_map<char,int> m;
    for(int i  = 0;i<s.length();i++){
        m[s[i]]++;
    }
    for(int i = 0;i<s.length();i++){
        if(m[s[i]]==1){
            return i;
        }
    }
    return -1;
}

int main(){
    string s= "geeksforgeeks";
    cout<<leftNonRep(s)<<endl;
    return 0;
}