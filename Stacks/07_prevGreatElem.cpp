#include<bits/stdc++.h>
using namespace std;

void prevGreat(vector<int> v){
    stack<int> st;
    st.push(v[0]);
    cout<<-1<<" ";
    for(int i = 1;i<v.size();i++){
        while (!st.empty() && st.top()<=v[i]){
            st.pop();
        }
        if(st.empty()){
            cout<<-1<<" ";
        }
        else{
            cout<<st.top()<<" ";
        }
        st.push(v[i]);
    }
}

int main(){
    vector<int> arr = {15,10,18,12,4,6,2,8};  
    prevGreat(arr); 
    return 0;
}