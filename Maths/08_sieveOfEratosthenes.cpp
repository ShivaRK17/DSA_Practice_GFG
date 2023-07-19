#include<bits/stdc++.h>
using namespace std;

void sieveOfErat(int n){
    vector<bool> num(n+1,true);
    num[0]=false;
    num[1]=false;
    for(int i=2;i*i<=n;i++){
        if(num[i]){
            for(int j = i*2;j<=n;j+=i){
                num[j] = false;
            }
        }
    }
    for(int i = 2;i<=n;i++){
        if(num[i]){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n = 97;
    sieveOfErat(n);
    return 0;
}