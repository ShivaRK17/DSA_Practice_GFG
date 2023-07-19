#include<bits/stdc++.h>
using namespace std;

stack<int> nextGreatElem(vector<int> v){
    int  n= v.size();
    stack<int> ans;
    ans.push(-1);
    stack<int> s;
    s.push(v[n-1]);
    for(int i = n-2;i>=0;i--){
        while(!s.empty() && v[i]>=s.top()){
            s.pop();
        }
        if(s.empty()){
            ans.push(-1);
        }
        else{
            ans.push(s.top());
        }
        s.push(v[i]);
    }
    return ans;
}

int main(){
    vector<int> v= {5,15,10,8,6,12,9,18};
    stack<int> ans = nextGreatElem(v);
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
    return 0;
}