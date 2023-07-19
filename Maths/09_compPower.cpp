#include<bits/stdc++.h>
using namespace std;

long long powe(int x,int y){
    if(y==0){
        return 1;
    }
    int temp = powe(x,y/2);
    temp = temp*temp;
    if(y%2==0){
        return temp;
    }
    else{
        return temp*x;
    }
}
// x * x * x * ....y times

int main(){
    cout<<powe(3,5);
    return 0;
}