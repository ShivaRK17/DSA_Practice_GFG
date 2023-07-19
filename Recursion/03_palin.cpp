#include<bits/stdc++.h>
using namespace std;

bool isPal(string s){
    if(s==""){
        return true;
    }
    return (s[0]==s[s.length()-1])&&isPal(s.substr(1,s.length()-2));
}
// racecar
bool isPal2(string s,int i,int j){
    if(i>=j){
        return true;
    }
    else{
        return (s[i]==s[j])&&isPal2(s,i+1,j-1);
    }
}


int main(){
    // cout<<isPal("racecar");
    string s = "racecar";
    cout<<(isPal2(s,0,s.length()-1)?"true":"false");
    return 0;
}