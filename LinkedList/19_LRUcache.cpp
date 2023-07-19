#include<bits/stdc++.h>
using namespace std;

class LRUCache {
public:
    class Node{
        public:
        int key;
        int data;
        Node* next;
        Node* prev;
        Node(int k,int x){
            key = k;
            data = x;
            next = NULL;
            prev = NULL;
        }
    };
    int size;
    int cap;
    unordered_map<int,Node*> m;
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    LRUCache(int capacity) {
        size = 0;
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if(m.find(key)!=m.end()){
            Node* temp = m[key];
            int res = temp->data;
            Node* previ = temp->prev;
            Node* nexti = temp->next;
            previ->next = nexti;
            nexti->prev = previ;
            

            Node* tempi = head->next;
            temp->next = tempi;
            temp->prev = head;
            tempi->prev = temp;
            head->next = temp;

            m[key] = head->next;
            return res;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            Node* exNode = m[key];
            m.erase(key);
            Node* previ = exNode->prev;
            Node* nexti = exNode->next;
            nexti->prev = previ;
            previ->next = nexti;
        }
        else if(m.size()==cap){
            m.erase(tail->prev->key);

            Node* previ = tail->prev->prev;
            previ->next = tail;
            tail->prev = previ;
        }
        Node* newNode = new Node(key,value);
        Node* temp = head->next;
        newNode->next = temp;
        newNode->prev = head;
        temp->prev = newNode;
        head->next = newNode;
        m[key] = head->next;
    }
};

int main(){
    
    return 0;
}