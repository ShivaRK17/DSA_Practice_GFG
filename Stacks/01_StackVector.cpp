#include<bits/stdc++.h>
using namespace std;

class Stack{
    int size;
    int cap;
    vector<int> v;
    public:
    Stack(int x){
        size = 0;
        cap = x;
    }
    void push(int x){
        if(size==cap){
            cout<<"Stack Overflow\n";
            return;
        }
        v.push_back(x);
        size++;
    }
    int pop(){
        if(size==0){
            cout<<"Stack Underflow\n";
            return -1;
        }
        int temp = this->top();
        v.pop_back();
        size--;
        return temp;
    }
    int top(){
        if(size==0){
            return -1;
        }
        return v[size-1];
    }
    bool isEmpty(){
        return size==0;
    }
    bool isFull(){
        return size==cap;
    }
};

int main(){
    Stack* s = new Stack(4);
    cout<<s->isEmpty()<<endl;

    s->push(3);
    s->push(1);
    s->push(4);

    while(!s->isEmpty()){
        cout<<s->pop()<<endl;
    }
    return 0;
}