#include <bits/stdc++.h>
using namespace std;
class Stack{
    queue<int> q1;
    queue<int> q2;
    public:
    void push(int x){
        q1.push(x);
    }

    int pop(){
        if (q1.empty())
        {
            return -1;
        }
        while (q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }
        int temp = q1.front();
        q1.pop();
        while (!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return temp;
    }

    int top(){
        if (q1.empty()){
            return -1;
        }
        return q1.back();
    }

    bool empty(){
        return q1.empty();
    }
};

int main(){
    Stack* s = new Stack;
    s->push(4);
    s->push(3);
    s->push(2);
    cout<<s->pop()<<endl;
    cout<<s->pop();
    return 0;
}