// https://leetcode.com/problems/maximum-subarray/

#include <iostream>
#include <vector>

using namespace std;

    int max(int a, int b){
            return a>b?a:b;
    }
    int maxSubArray(vector<int>& nums){
        int i,n=nums.size(),ans=INT_MIN;
        vector <long long> dp(n+1,0);
            
        for(i=0;i<n;i++){
            dp[i+1] = nums[i];
            dp[i+1] = max(dp[i+1], nums[i]+dp[i]);
            ans = max(ans,dp[i+1]);
        }
            return ans;
    }

int main(){

    return 0;
}