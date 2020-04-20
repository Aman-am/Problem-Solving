// https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3299/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

int search(vector<int>& nums, int target) {
    int begin = 0 , end =nums.size(), temp;
    int mid = (begin+end)/2; 
    
    while(begin<=end){
        if(nums[mid] == target)return mid;
        if(target<nums[mid] && target > nums[begin]){
            end = mid;
        }else if(target<nums[mid] && target < nums[begin]){
            begin = mid;
        }
    }
    return -1;

}

int main(){
    vector<int> shift = {4,5,6,7,0,1,2};
    int t = 0;
    cout<< search(shift,t);
    return 0;
}