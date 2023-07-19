#include<bits/stdc++.h>
using namespace std;

bool isPal(string s){
    int l = 0;
    int h = s.length()-1;
    while(l<h){
        if(s[l++]!=s[h--]){
            return false;
        }
    }
    return true;
}

int main(){
    string s =  "racecar";
    cout<<isPal(s);
    return 0;
}