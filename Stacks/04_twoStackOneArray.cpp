#include<bits/stdc++.h>
using namespace std;

class TwoStack{
    int * arr;
    int size1;
    int size2;
    int cap;
    int top1;
    int top2;
    public:
    TwoStack(int x){
        size1 = 0;
        size2 = 0;
        cap = x;
        arr = new int[x];
        top1 = -1;
        top2 = x;
    }
    void push1(int x){
        if(top1+1==top2){
            return;
        }
        top1++;
        arr[top1] = x;
        size1++;
    }
    void push2(int x){
        if(top1+1==top2){
            return;
        }
        top2--;
        arr[top2] = x;
        size2++;
    }
    int getSize1(){
        return size1;
    }
    int getSize2(){
        return size2;
    }
    int pop1(){
        if(top1==-1){
            return -1;
        }
        int temp = arr[top1];
        top1--;
        size1--;
        return temp;
    }
    int pop2(){
        if(top2==cap){
            return -1;
        }
        int temp = arr[top2];
        top2++;
        size2--;
        return temp;
    }
};

int main(){
    TwoStack* s = new TwoStack(5);
    s->push1(4);
    s->push1(3);
    s->push2(1);
    s->push1(2);
    s->push2(7);
    s->push1(7);

    cout<<s->pop1()<<endl;
    cout<<s->pop1()<<endl;
    cout<<s->pop1()<<endl;
    cout<<s->pop1()<<endl;

    cout<<s->pop2()<<endl;

    return 0;
}