#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int x){
            this->data = x;
            this->next = NULL;
        }
};
class Stack{
    public:
        Node* top;
        int size;
        Stack(){
            size = 0;
            top = NULL;
        }
        void push(int x){
            Node* newNode = new Node(x);
            newNode->next = top;
            top = newNode;
            size++;
        }
        int pop(){
            if(size==0){
                return -1;
            }
            Node* temp = top;
            int dat = temp->data;
            top = top->next;
            delete temp;
            size--;
            return dat;
        }
        bool isEmpty(){
            return size==0;
        }
        int topval(){
            return top?top->data:-1;
        }
};

int main(){
    Stack* s=  new Stack();


    s->push(4);
    s->push(2);
    s->push(3);

    // cout<<s->pop()<<endl;
    while(!s->isEmpty()){
        cout<<s->pop()<<endl;
    }
    return 0;
}