#include<bits/stdc++.h>
using namespace std;

bool isEven(int a){
    return a%2==0;
}
bool isOdd(int a){
    return a%2!=0;
}

int longOddEven(vector<int> v){
    int ans = 1;
    int curr = 1;
    for(int i = 1;i<v.size();i++){
        if( ( isEven(v[i]) && isOdd(v[i-1]) ) || ( isOdd(v[i]) && isEven(v[i-1]) ) ){
            curr++;
            ans = max(ans,curr);
        }
        else{
            curr = 1;
        }
    }
    return ans;
}

int main(){
    vector<int> v = {10,12,14,7,8};
    cout<<longOddEven(v);
    return 0;
}