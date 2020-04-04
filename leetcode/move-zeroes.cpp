// https://leetcode.com/problems/move-zeroes/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int j=0;
    for (int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            nums[j++] = nums[i];
        }
    }
    while(j<nums.size())nums[j++]=0;
    for (int i=0;i<nums.size();i++){
        cout<<nums[i];
    }
}

int main(){
    vector <int> vec{0,0,1};
    moveZeroes(vec);
    return 0;
}