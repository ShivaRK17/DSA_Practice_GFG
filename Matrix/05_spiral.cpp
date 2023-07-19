#include<bits/stdc++.h>
using namespace std;

void spiralTraverse(vector<vector<int>> v){
    int m = v.size();
    int n = v[0].size();

    int top = 0;
    int bottom= m-1;
    int left = 0;
    int right = n-1;
    while(top<bottom && left<right){
        for(int i = left;i<=right;i++){
            cout<<v[top][i]<<" ";
        }
        top++;
        for(int i= top;i<=bottom;i++){
            cout<<v[i][right]<<" ";
        }
        right--;
        for(int i = right;i>=left;i--){
            cout<<v[bottom][i]<<" ";
        }
        bottom--;
        for(int i = bottom;i>=top;i--){
            cout<<v[i][left]<<" ";
        }
        left++;
    }
}

int main(){
    // vector<vector<int>> v = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<vector<int>> v = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    spiralTraverse(v);
    return 0;
}