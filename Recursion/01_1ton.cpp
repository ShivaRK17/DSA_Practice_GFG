#include<bits/stdc++.h>
using namespace std;

void oneton(int n){
    if(n==0){
        return;
    }
    oneton(n-1);
    cout<<(n);
}
void ntoone(int n){
    if(n==0){
        return;
    }
    cout<<(n);
    ntoone(n-1);
}

int main(){
    oneton(8);
    cout<<endl;
    ntoone(8);
    return 0;
}