#include<bits/stdc++.h>
using namespace std;

int p(int x,int y){
    if(y==0){
        return x;
    }
    int temp = x;
    int ans = 1;
    while(y){
        if(y&1){
            ans*=temp;
        }
        temp=temp*temp;
        y=y>>1;
    }
    return ans;
}

/*
7  = 111

*/

int main(){
    cout<<p(3,7);
    return 0;
}