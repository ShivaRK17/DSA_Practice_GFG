#include<bits/stdc++.h>
using namespace std;

//Generate permutations that does not contain 'AB'

bool isSafe(string str,int left,int i,int right){
    if(left!=0 && str[left-1]=='A' && str[i]=='B'){
        return false;
    }
    if(right==(left+1) && str[i]=='A' && str[left]=='B'){
        return false;
    }
    return true;
}

void permute(string str,int left,int right){
    if(left==right){
        cout<<str<<endl;
        return;
    }
    else{
        for(int i = left;i<=right;i++){
            if(isSafe(str,left,i,right)){
                swap(str[i],str[left]);
                permute(str,left+1,right);
                swap(str[i],str[left]);
            }
        }
    }
}

int main(){
    string s = "ABC";
    permute(s,0,s.length()-1);
    return 0;
}