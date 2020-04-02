// https://leetcode.com/problems/house-robber/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int rob(vector<int>& nums) {
    int i,n=nums.size();
    vector <long long> dp(n+2,0);
    for(i=0;i<n;i++){
        dp[i+2] = dp[i+1];
        dp[i+2] = max(dp[i+2], nums[i]+dp[i]);
        
    }
    return dp[n+1];      
}

int main(){

    return 0;
}