#include<bits/stdc++.h>
using namespace std;

int circTour(vector<int> a,vector<int> b){
    int def = 0;
    int bal =  0;
    int start = 0;
    for(int i = 0;i<a.size();i++){
        bal+=(a[i]-b[i]);
        if(bal<0){
            start = i+1;
            def+=bal;
            bal = 0;
        }
    }
    if(def+bal>=0){
        return start;
    }
    return -1;
}

int main(){
    vector<int> petrol = {50,10,60,100};   
    vector<int> dist = {30,20,100,10};   
    cout<<circTour(petrol,dist);
    return 0;
}