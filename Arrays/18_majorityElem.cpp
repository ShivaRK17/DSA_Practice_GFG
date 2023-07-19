#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v){
    int ans = 0;
    int count = 1;
    for(int i = 1;i<v.size();i++){
        if(v[i]==v[ans]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            ans = i;
            count = 1;
        }
    }
    int count2 = 0;
    for(int i = 0;i<v.size();i++){
        if(v[ans]==v[i]){
            count2++;
        }
    }
    if(count2>(v.size()/2)){
        return ans;
    }
    return -1;
}
//MOORE'S VOTING ALGORITHM

int main(){
    vector<int> v = {8,8,6,6,6,4,6};
    // vector<int> v = {3,3,4,5,3};
    int maj = majorityElement(v);
    cout<<"Maj el is "<<v[maj]<<" on pos "<<maj;
    return 0;
}