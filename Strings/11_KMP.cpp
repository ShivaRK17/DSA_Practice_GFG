#include<bits/stdc++.h>
using namespace std;

vector<int> makeLps(string a){
    int n = a.length();
    int len = 0;
    int i = 1;
    vector<int> ans(n,0);
    while(i<(n)){
        if(a[i]==a[len]){
            len++;
            ans[i++] = len;
        }
        else{
            if(len==0){
                i++;
            }
            else{
                len = ans[len-1];
            }
        }
    }
    return ans;
}

void KMS(string a,string b){
    int n = a.length();
    int m = b.length();
    vector<int> lps = makeLps(b);
    int i = 0,j = 0;
    while(i<n){
        if(a[i]==b[j]){
            i++;
            j++;
        }
        if(j==m){
            cout<<(i-j)<<" ";
            j = lps[j-1];
        }
        else if(i<n && a[i]!=b[j]){
            if(j==0){
                i++;
            }
            else{
                j = lps[j-1];
            }
        }
    }
}

int main(){
    string a = "abcabcdcab";
    string b = "cab";
    KMS(a,b);
    return 0;
}