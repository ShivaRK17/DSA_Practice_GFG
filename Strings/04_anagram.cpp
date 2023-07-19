#include<bits/stdc++.h>
using namespace std;

bool isAna(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    unordered_map<char,int> m;
    for(auto i:s1){
        m[i]++;
    }
    for(auto i:s2){
        m[i]--;
        if(m[i]<0){
            return false;
        }
    }
    return true;
}

int main(){
    string s1 =  "racecar";
    string s2 =  "racarec";
    cout<<isAna(s1,s2);
    return 0;
}