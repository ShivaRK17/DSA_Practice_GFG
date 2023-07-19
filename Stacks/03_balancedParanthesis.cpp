#include<bits/stdc++.h>
using namespace std;

char rec(char c){
    if(c==')') return '(';
    else if(c=='}') return '{';
    else return '[';
}

bool isPar(string s){
    stack<char> st;
    for(int i = 0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else if(s[i]==')' || s[i]==']' || s[i]=='}'){
            if(st.empty()) return false;
            if(rec(s[i])==st.top()) st.pop();
            else return false;
        }
    }
    return st.empty();
}

int main(){
    string a = "({}){}";
    cout<<isPar(a);
    return 0;
}