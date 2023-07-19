#include<bits/stdc++.h>
using namespace std;

int numOfDigits(int n){
    int count = 0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}

int main(){
    int n = 134121;
    cout<<"Number of Digits is "<<numOfDigits(n);
    return 0;
}