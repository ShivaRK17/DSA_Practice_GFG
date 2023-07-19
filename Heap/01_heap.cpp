#include<bits/stdc++.h>
using namespace std;

class MinHeap{
    public:
        int *arr;
        int size;
        int cap;
        MinHeap(int x){
            cap = x;
            size = 0;
            arr = new int[x];
        }
        int left(int i){
            return (2*i)+1;
        }
        int right(int i){
            return (2*i)+2;
        }
        int parent(int i){
            return ((i-1)/2);
        }
        void insert(int x){
            if(size==cap) return;
            arr[size++] = x;
            for(int i = size-1;i!=0 && arr[i]<arr[parent(i)];i = parent(i)){
                swap(arr[i],arr[parent(i)]);
            }
        }
};

int main(){
    MinHeap* h = new MinHeap(6);
    h->insert(4);
    h->insert(2);
    h->insert(8);
    h->insert(6);
    h->insert(7);
    for(int i = 0;i<h->size;i++){
        cout<<h->arr[i]<<" ";
    }
    return 0;
}