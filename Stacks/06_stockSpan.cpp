#include<bits/stdc++.h>
using namespace std;

void stockSpan(vector<int> v){
    int n = v.size();
    stack<int> st;
    st.push(0);
    cout<<1<<" ";
    for(int i = 1;i<n;i++){
        while(!st.empty() && v[st.top()]<=v[i]){
            st.pop();
        }
        int span = st.empty()?i+1:i-st.top();
        cout<<span<<" ";
        st.push(i);
    }
}

int main(){
    vector<int> arr = {60,10,20,40,35,30,50,70,65};
    stockSpan(arr);
    return 0;
}