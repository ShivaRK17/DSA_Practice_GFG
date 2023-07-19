#include<bits/stdc++.h>
using namespace std;

int gcdmod(int a, int b)
{
    if(b==0){
        return a;
    }
    return gcdmod(b,a%b);
}

long long lcm(int a,int b){
    return (a*b)/(gcdmod(a,b));
}

int main(){
    cout<<lcm(4,7);
    return 0;
}