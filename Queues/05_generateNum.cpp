#include<bits/stdc++.h>
using namespace std;

void generateNums(vector<int> v,int n){
    queue<string> q;
    for(int i = 0;i<v.size();i++){
        q.push(to_string(v[i]));
    }
    for(int i = 0;i<n;i++){
        string curr = q.front();
        cout<<curr<<" ";
        q.pop();
        for(int j = 0;j<v.size();j++){
            string temp = curr+to_string(v[j]);
            q.push(temp);
        }
    }
}

int main(){
    vector<int> v = {1,2,3};
    generateNums(v,10);
    // cout<<to_string(4);
    return 0;
}