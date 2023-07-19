#include<bits/stdc++.h>
using namespace std;

void median(vector<int> v){
    priority_queue<int> s;
    priority_queue<int,vector<int> , greater<int>> g;
    s.push(v[0]);
    cout<<s.top()<<" ";
    for(int i = 1;i<v.size();i++){
        int x = v[i];
        if(s.size()>g.size()){
            if(s.top()>x){
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            else{
                g.push(x);
            }
            cout<<(s.top()+g.top())/2.0<<" ";
        }
        else{
            if(x>g.top()){
                s.push(g.top());
                g.pop();
                g.push(x);
            }
            else{
                s.push(x);
            }
            cout<<s.top()<<" ";
        }
    }
}

int main(){
    vector<int> v = {25,7,10,15,20};
    median(v);
    return 0;
}