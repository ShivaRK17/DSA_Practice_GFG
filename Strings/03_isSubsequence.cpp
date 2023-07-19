#include<bits/stdc++.h>
using namespace std;

bool isSeq(string s1,string s2){
    int i = 0,j = 0;
    while(j<s2.length() && i<s1.length()){
        if(s2[j]==s1[i]){
            j++;
            i++;
        }
        else{
            i++;
        }
    }
    return j==s2.length();
}

int main(){
    string s1 =  "racecar";
    string s2 = "rar";
    cout<<isSeq(s1,s2);
    return 0;
}