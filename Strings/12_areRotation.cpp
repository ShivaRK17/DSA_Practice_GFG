#include<bits/stdc++.h>
using namespace std;

bool areRot(string a,string b){
    if(b.length()!=a.length()){
        return false;
    }
    return (a+a).find(b)!=string::npos;
}

int main(){
    string a = "abac";
    string b = "acab";
    cout<<areRot(a,b);
    return 0;
}