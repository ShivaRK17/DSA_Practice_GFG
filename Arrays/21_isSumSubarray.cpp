#include<bits/stdc++.h>
using namespace std;

bool isSumPresent(vector<int> v,int sum){
    int s = 0;
    int e = 0;
    int curr = v[s];
    while(s<v.size()){
        if(sum==curr){
            return true;
        }
        else if(sum>curr){
            e++;
            if(e>=v.size()){
                return false;
            }
            curr+=v[e];
        }
        else{
            s++;
            if(s>=e){
                 e=s;
                 curr=v[s];
            }
            else{
                curr-=v[s-1];
            }
        }
    }
    return false;
}

int main(){
    vector<int> v = {1,4,20,3,10,5};
    cout<<isSumPresent(v,22);
    return 0;
}