#include<bits/stdc++.h>
using namespace std;

void rev(string &s,int i ,int j){
    while(i<=j){
        swap(s[i++],s[j--]);
    }
}

void reverseWords(string &str){
    int s = 0;
    int e = 0;
    while(e<str.length()){
        if(str[e]==' '){
            rev(str,s,e-1);
            s = e+1;
        }
        e++;
    }
    rev(str,s,e-1);
    rev(str,0,str.length()-1);
}

int main(){
    string s = "I am srk";
    reverseWords(s);
    cout<<s;
    return 0;
}