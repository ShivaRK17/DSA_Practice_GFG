#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &a)
{
    int curr = 0;
    for(int i = 1;i<a.size();i++){
        if(a[i]!=a[curr]){
            curr++;
            a[curr] = a[i];
        }
    }
    return curr+1;
}

int main()
{
    vector<int> a = {2, 3, 3, 7, 9, 9, 9, 67, 67, 80};
    int n = removeDuplicates(a);
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}