#include<bits/stdc++.h>
using namespace std;

void printUnion(vector<int> a,vector<int> b){
     int i = 0;
     int j = 0;
     while(i<a.size() && j<b.size()){
        // cout<<i<<" "<<j<<endl;
        if((i>0 && a[i]==a[i-1])){
            i++;
            continue;
        }
        if((j>0 && b[j]==b[j-1])){
            j++;
            continue;
        }
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            cout<<a[i++]<<" ";
        }
        else if(b[j]<a[i]){
            cout<<b[j++]<<" ";
        }
     }
     while(i<a.size()){
        if(i>0 && a[i]!=a[i-1])
        cout<<a[i++]<<" ";
     }
     while(j<b.size()){
        if(j>0 && b[j]!=b[j-1])
        cout<<b[j++]<<" ";
     }
}

int main(){
    vector<int> a = {3,5,5,8};
    vector<int> b = {2,8,9,10,15};
    printUnion(a,b);
    return 0;
}