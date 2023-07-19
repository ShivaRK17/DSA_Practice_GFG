#include<bits/stdc++.h>
using namespace std;
//Rabin Karp

void rabinKarp(string a,string b){
    int n = a.length();
    int m = b.length();
    if(m>n){
        cout<<-1<<endl;
        return;
    }
    int pat = 0;
    int txt = 0;
    for(int i = 0;i<m;i++){
        pat+=(b[i]-'a');
        txt+=(a[i]-'a');
    }
    for(int i = 0;i<n-m+1;i++){
        if(pat==txt){
            bool an = true;
            for(int j = 0;j<m;j++){
                if(b[j]!=a[i+j]){
                    an = false;
                    break;
                }
            }
            if(an){
                cout<<i<<" ";
            }
        }
        txt-=(a[i]-'a');
        txt+=(a[i+m]-'a');
    }   
}

int main(){
    string a = "geeksforgeeks";
    string b = "eks";
    rabinKarp(a,b);
    return 0;
}