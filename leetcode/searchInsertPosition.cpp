// https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0, r = n, mid;
        
        while(l<r){
            mid = l+(r-l)/2;
            
            if(nums[mid] == target)return mid;
            
            else if (nums[mid] > target) r= mid;
            else l = mid+1;
        }
        return l;
    }
};