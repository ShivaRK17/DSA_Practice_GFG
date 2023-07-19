#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,char A,char B,char C){
    if(n==1){
        cout<<"Move 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    towerOfHanoi(n-1,A,C,B);
    // towerOfHanoi(1,A,B,C);
    cout<<"Move "<<n<<" from "<<A<<" to "<<C<<endl;
    towerOfHanoi(n-1,B,A,C);
}

int main(){
    towerOfHanoi(4,'a','b','c');
    return 0;
}