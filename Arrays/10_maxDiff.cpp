#include<bits/stdc++.h>
using namespace std;

int maxDiff(vector<int> v){
    int mini = v[0];
    int res = v[1]-v[0];
    for(int i = 0;i<v.size();i++){
        res = max(res,v[i]-mini);
        mini = min(v[i],mini);
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a = {2,3,10,6,4,8,1};
    cout<<maxDiff(a);
    return 0;
}