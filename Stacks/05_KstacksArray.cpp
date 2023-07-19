#include<bits/stdc++.h>
using namespace std;

class kStacks{
    int* arr;
    int* top;
    int* next;
    int k;
    int freeTop;
    int cap;
    public:
    kStacks(int k,int n){
        k = k;
        cap = n;
        freeTop = 0;
        arr = new int[n];
        top = new int[k];
        next = new int[n];
        fill(top,top+k,-1);
        for(int i = 0;i<n-1;i++){
            next[i] = i+1;
        }
        next[n-1] = -1;
    }
    void push(int m,int x){
        if(freeTop ==-1) return;
        int i = freeTop;
        freeTop = next[i];
        arr[i] = x;
        next[i] = top[m-1];
        top[m-1] = i;
    }
    int pop(int m){
        if(top[m-1]==-1) return -1;
        int i = top[m-1];
        top[m-1] = next[i];
        next[i] = freeTop;
        freeTop = i;
        return arr[i];
    }
};

int main(){
    kStacks * s = new kStacks(3,6);
    s->push(0,3);
    s->push(1,6);
    s->push(1,5);
    cout<<s->pop(1)<<endl;
    cout<<s->pop(1)<<endl;
    cout<<s->pop(1)<<endl;
    cout<<s->pop(0)<<endl;
    return 0;
}