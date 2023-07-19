#include<bits/stdc++.h>
using namespace std;

class Deque{
    int size;
    int cap;
    int* arr;
    int front;
    int rear;
    public:
    Deque(int x){
        cap = x;
        size = 0;
        front = rear = -1;
        arr = new int[cap];
    }
    void pushback(int x){
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
    int popfront(){
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
    void pushfront(int x){
        if(size==cap){
            cout<<"Queue Overflow\n";
            return;
        }
        if(size==0){
            front = rear = 0;
        }
        else{
            if(front == 0){
                front = cap;
            }
            front--;
        }
        arr[front] = x;
        size++;
    }
    int popback(){
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
            temp = arr[rear];
            if(rear == 0){
                rear = cap;
            }
            rear--;
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
    Deque* q = new Deque(5);
    q->pushfront(5);
    q->pushback(4);
    cout<<q->getFront()<<endl;
    cout<<q->getRear()<<endl;
    cout<<q->popfront()<<endl;
    cout<<q->getFront()<<endl;
    return 0;
}