#include<bits/stdc++.h>
using namespace std;

bool subSetSum(vector<int> nums,int sum,int i,int givSum){
    if(sum==givSum){
        return true;
    }
    if(sum>givSum || i>nums.size()){
        return false;
    }
    return subSetSum(nums,sum,i+1,givSum) || subSetSum(nums,sum+nums[i],i+1,givSum);
}

int main(){
    cout<<subSetSum({1,2,3},0,0,1);
    return 0;
}