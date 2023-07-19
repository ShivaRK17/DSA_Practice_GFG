#include<bits/stdc++.h>
using namespace std;

void reverse(queue<int>&q){
    if(q.empty()){
        return;
    }
    int x = q.front();
    q.pop();
    reverse(q);
    q.push(x);
}

int main(){
    queue<int> q;
    q.push(4);    
    q.push(3);    
    q.push(2);    
    q.push(6);    
    q.push(5);   
    reverse(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}