#include<bits/stdc++.h>
using namespace std;

void segPosNeg(vector<int> &v){
    int i = -1,j = v.size();
    while(true){
        do
        {
            i++;
        } while (v[i]<0);
        do
        {
            j--;
        } while (v[j]>=0);
        if(i>=j){
            return;
        }
        swap(v[i],v[j]);
    }
}

int main(){
    vector<int> v = {-4,6,-7,-8,2,1,-3};
    segPosNeg(v);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}