#include<bits/stdc++.h>
using namespace std;

void genSub(string s,string temp,int i){
    if(i==s.length()){
        cout<<temp<<endl;
        return;
    }
    genSub(s,temp+s[i],i+1);
    genSub(s,temp,i+1);
}

int main(){
    genSub("abc","",0);
    return 0;
}