// https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3283/

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

    return 0;
}