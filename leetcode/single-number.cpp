// https://leetcode.com/problems/single-element-in-a-sorted-array/
//  O(log n) time and O(1) space

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int singleNumber(vector<int>& nums) {
    int ans=0;
    for(int i=0;i<nums.size();i++){
        ans^=nums[i];
    }
    return ans;
}

int main(){
    vector <int> vec{1,1,2,2,3};
    cout<< singleNumber(vec);
    return 0;
}