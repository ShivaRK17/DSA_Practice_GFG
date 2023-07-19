#include<bits/stdc++.h>
using namespace std;

int squareRoot(int x){
    int l = 1;
    int h = x;
    int ans = -1;
    while(l<=h){
        int mid = (l+h)/2;
        int midsq = mid*mid;
        if(mid*mid==x){
            return mid;
        }
        else if(midsq>x){
            h = mid-1;
        }
        else{
            ans = mid;
            l = mid+1;
        }
    }
    return ans;
}

int main(){
    cout<<squareRoot(26);
    return 0;
}