#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n){
    for(int i = 1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i*i!=n){
                cout<<n/i<<" ";
            }
        }
    }
}

int main(){
    int n = 10;
    printDivisors(n);
    return 0;
}