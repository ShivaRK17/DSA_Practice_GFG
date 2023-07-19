#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c=='/' || c=='*'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    return 0;
}

string infToPre(string s){
    stack<char> st;
    string ans = "";
    for(int i = s.length()-1;i>=0;i--){
        if(s[i]==')'){
            st.push(')');
        }
        else if(s[i]=='('){
            while(!st.empty() && st.top()!=')'){
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
            ans+=s[i];
        }
        else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            while(!st.empty() && prec(st.top())>=prec(s[i])){
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    string s = "1+2*3";
    cout<<infToPre(s);
    return 0;
}