#include<bits/stdc++.h>
using namespace std;

int largestArea(vector<int> v){
    stack<int> st;
    int res = 0;
    int n = v.size();
    for (int i = 0; i < n; i++){
        while(!st.empty() && v[st.top()]>=v[i]){
            int top= st.top();
            st.pop();
            int curr = st.empty()?i:i-st.top()-1;
            curr = curr*v[top];
            res = max(res,curr);
        }
        st.push(i);
    }
    while(!st.empty()){
        int top = st.top();
        st.pop();
        int curr = v[top]*(st.empty()?n:n-st.top()-1);
        res = max(res,curr);
    }
    return res;
}

int main(){
    vector<int> v = {60,20,50,40,10,50,60};
    cout<<largestArea(v);
    return 0;
}