#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

class Queue{
    int size;
    Node* front;
    Node* rear;
    public:
    Queue(){
        front = rear = NULL;
        size = 0;
    }
    void enqueue(int x){
        Node* newNode=  new Node(x);
        if(size==0){
            front = rear = newNode;
        }
        else{
            rear->next = newNode;
            rear = rear->next;
        }
        size++;
    }
    int dequeue(){
        if(!front){
            return -1;
        }
        if(front==rear){
            size--;
            int temp = front->data;
            delete front;
            front = rear = NULL;
            return temp;
        }
        else{
            size--;
            Node* t = front;
            int temp = front->data;
            front = front->next;
            delete t;
            return temp;
        }
    }
    int getSize(){
        return size;
    }
    int getFront(){
        return front?front->data:-1;
    }
    int getRear(){
        return rear?rear->data:-1;
    }
};

int main(){
    Queue *q = new Queue();
    q->enqueue(4);
    q->enqueue(3);
    q->enqueue(2);
    cout<<q->getFront()<<endl;
    cout<<q->getRear()<<endl;

    cout<<q->dequeue()<<endl;
    cout<<q->dequeue()<<endl;
    cout<<q->dequeue()<<endl;
    cout<<q->dequeue()<<endl;
    return 0;
}