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

bool isPal(int n){
    int s = numOfDigits(n);
    while(n>0){
        if(s<=1){
            return true;
        }
        int first = n/pow(10,s-1);
        n = n%int(pow(10,s-1));
        int second = n%10;
        s = s-2;
        n = n/10;
        // cout<<first<<" "<<second<<endl;
        // cout<<n<<" "<<s<<endl;
        if(first!=second){
            return false;
        }
    }
    return true;
}

int main(){
    int n = 216;
    cout<<isPal(n);
    return 0;
}