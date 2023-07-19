#include<iostream>
#include<string>
using namespace std;

//Naive

void naive(string a,string b){
    if(a.length()<b.length()){
        cout<<-1<<endl;
        return; 
    }
    for(int i = 0;i<a.length()-b.length()+1;i++){
        bool tur = false;
        for(int j = 0;j<b.length();j++){
            if(a[i+j]!=b[j]){
                tur = true;
                break;
            }
        }
        if(!tur){
            cout<<i<<endl;
        }
    }
    
}



int main(){
    string a = "geeksforgeeks";
    string b = "eks";
    cout<<a<<endl;
    naive(a,b);
    return 0;
}