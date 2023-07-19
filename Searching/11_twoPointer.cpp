#include<bits/stdc++.h>
using namespace std;

bool findSum(vector<int> v,int x){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(v[i]+v[j]==x){
            return true;
        }
        else if(v[i]+v[j]>x){
            j = j-1;
        }
        else{
            i = i+1;
        }
    }
    return false;
}

int main(){
    vector<int> v = {2,5,8,12,30};
    cout<<findSum(v,14);
    return 0;
}