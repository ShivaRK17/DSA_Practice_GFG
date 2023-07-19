#include<bits/stdc++.h>
using namespace std;

long long fact(int n){
    return (n==1)?1:n*fact(n-1);
}


int main(){
    int n = 20;
    cout<<fact(n);
    return 0;
}