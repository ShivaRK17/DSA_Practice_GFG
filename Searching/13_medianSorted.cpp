#include<bits/stdc++.h>
using namespace std;

double binMedian(vector<int> a,vector<int> b){
    int n1 = a.size();
    int n2 = b.size();
    if(n2<n1) return binMedian(b,a);
    int total = n1+n2;
    int half = (n1+n2)/2;
    if(n1==0) return n2%2?b[n2/2]:(b[n2/2]+b[(n2/2)-1])/2.0;
    if(n2==0) return n1%2?a[n1/2]:(a[n1/2]+a[(n1/2)-1])/2.0;
    int l = 0;
    int h = n1-1;
    while(true){
        int i = (l+h)/2;
        if(l+h<0){
            i = -1;
        }
        int j = half-i-2;

        int leftA = i>=0?a[i]:INT_MIN;
        int rightA = (i+1<n1)?a[i+1]:INT_MAX;
        int leftB = j>=0?b[j]:INT_MIN;
        int rightB = (j+1<n2)?b[j+1]:INT_MAX;

        if(leftA<=rightB && leftB<=rightA){
            if(total&1){
                return min(rightA,rightB);
            }
            else{
                return (max(leftA,leftB)+min(rightA,rightB))/2.0;
            }
        }
        else if(leftA>rightB){
            h = i-1;
        }
        else{
            l = i+1;
        }
    }
    return 0;
}

 int main(){
    vector<int> a = {1,3};
    // vector<int> a = {};
    vector<int> b = {2};
    cout<<binMedian(a,b);
    // cout<<findMedianSortedArrays(a,b);
    return 0;
 }
