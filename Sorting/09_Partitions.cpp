#include<bits/stdc++.h>
using namespace std;

void naivePart(vector<int> &v,int p){
    int piv = v[p];
    vector<int>  temp;
    for(int i = 0;i<v.size();i++){
        if(v[i]<=piv){
            temp.push_back(v[i]);
        }
    }
    for(int i = 0;i<v.size();i++){
        if(v[i]>piv){
            temp.push_back(v[i]);
        }
    }
    for(int i = 0;i<v.size();i++){
        v[i] = temp[i];
    }
}

void lomutoPart(vector<int> &v,int l , int h){
    int piv = v[h];
    int j = l-1;
    for(int i= l;i<h;i++){
        if(v[i]<piv){
            j++;
            swap(v[i],v[j]);
        }
    }
    swap(v[j+1],v[h]);
}

int hoarePart(vector<int> &v ,int l ,int h){
    int piv = v[l];
    int i= l-1;
    int j = h+1;
    while(true){
        do{
          i++;  
        } while (v[i]<piv);
        do
        {
            j--;
        } while (v[j]>piv);
        if(i>=j){
            return j;
        }
        swap(v[i],v[j]);
    }
    return 0;
}



int main(){
    // vector<int> v = {5,4,3,8,6,12,10,7};
    vector<int> v = {8,4,7,9,3,10,5};
    // naivePart(v,6);
    // lomutoPart(v,0,6);
    cout<<hoarePart(v,0,6)<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}