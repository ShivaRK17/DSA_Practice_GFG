#include<bits/stdc++.h>
using namespace std;

int sumOfDig(int n){
    if(n<10){
        return n;
    }
    return sumOfDig(n/10)+(n%10);
}

int main(){
    cout<<sumOfDig(1234);
    return 0;
}