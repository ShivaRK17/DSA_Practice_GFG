#include<bits/stdc++.h>
using namespace std;

class Queue{
    int * arr;
    int front;
    int rear;
    int size;
    int cap;
    public:
    Queue(int x){
        cap = x;
        size = 0;
        front = rear = -1;
        arr = new int[cap];
    }
    void push(int x){
        if(size==cap){
            cout<<"Queue Overflow\n";
            return;
        }
        if(size==0){
            front = rear = 0;
        }
        else{
            rear = (rear+1)%cap;
        }
        arr[rear] = x;
        size++;
    }
    int pop(){
        if(size==0){
            cout<<"Queue Underflow\n";
            return -1;
        }
        int temp;
        if(front==rear){
            temp = arr[front];
            front = rear = -1;
        }
        else{
            temp = arr[front];
            front = (front+1)%cap;
        }
        size--;
        return temp;
    }
    int getSize(){
        return size;
    }
    int getFront(){
        if(size==0){
            return -1;
        }
        return arr[front];
    }
    int getRear(){
        if(size==0){
            return -1;
        }
        return arr[rear];
    }
};

int main(){
    Queue* q = new Queue(5);
    q->push(4);
    q->push(3);
    q->push(2);
    cout<<q->getFront()<<endl;
    cout<<q->pop()<<endl;
    cout<<q->getFront()<<endl;
    q->push(9);
    q->push(6);
    q->push(8);
    q->push(1);
    cout<<q->getFront()<<endl;
    cout<<q->getRear()<<endl;
    
    return 0;
}