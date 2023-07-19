#include<bits/stdc++.h>
using namespace std;

void printInter(vector<int> a,vector<int> b){
    int i = 0;
    int j = 0;
    while(i<a.size() && j<b.size()){
        // cout<<i<<" "<<j<<endl;
        if(a[i]==b[j]){
            if(i>0 && a[i]==a[i-1]){
                i++;
                j++;
                continue;
            }
            else{
                cout<<a[i]<<" ";
            }
            i++;
            j++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            i++;
        }
    }
}

int main(){
    vector<int> a = {3,5,10,10,10,15,15,20};
    vector<int> b = {3,3,3,5,10,15,30};
    printInter(a,b);
    return 0;
}