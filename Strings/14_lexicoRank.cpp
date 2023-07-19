#include<bits/stdc++.h>
using namespace std;

int lexicoRank(string a){
    int n = a.length();
    vector<int> v(256,0);
    for(int i = 0;i<n;i++){
        v[a[i]]++;
    }
    for(int i =1;i<256;i++){
        v[i]+=v[i-1];
    }
    int ans = 0;
    int fact = 1;
    for(int i = 1;i<n;i++){
        fact*=i;
    }
    for(int i = 0;i<n-1;i++){
        ans+=((v[a[i]-1]*fact));
        fact/=(n-i-1);
        for(int j = a[i];j<256;j++){
            v[j]--;
        }
    }
    return ans+1;
}

int main(){
    string a = "aabaa";
    cout<<lexicoRank(a);
    return 0;
}