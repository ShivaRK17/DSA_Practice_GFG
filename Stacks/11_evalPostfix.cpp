#include<bits/stdc++.h>
using namespace std;

int evaluatePost(string s){
    stack<int> st;
    for(int i = 0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int sec = st.top();
            st.pop();
            int fir = st.top();
            st.pop();
            int ans = 0;
            switch (s[i]){
            case '*':
                ans = fir*sec;
                break;
            case '+':
                ans = fir+sec;
                break;
            case '-':
                ans = fir-sec;
                break;
            case '/':
                ans = fir/sec;
                break;
            default:
                break;
            }
            st.push(ans);
        }
    }
    return st.top();
}

int main(){
    string s = "12*3+";
    cout<<evaluatePost(s);
    return 0;
}