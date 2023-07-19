#include<bits/stdc++.h>
using namespace std;

void permut(string s,int i){
    if(i==s.length()) cout<<s<<endl;
    for(int j = i;j<s.length();j++){
        swap(s[i],s[j]);
        permut(s,i+1);
    }
}

int main(){
    permut("abc",0);
    return 0;
}