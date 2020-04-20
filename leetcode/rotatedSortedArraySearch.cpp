// https://leetcode.com/problems/search-in-rotated-sorted-array/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

int search(vector<int>& nums, int target) {
    int begin = 0, end =nums.size()-1, mid;
    while(begin<=end){
        mid = (begin+end)/2; 
        int midE = nums[mid], leftE = nums[begin], rightE = nums[end];
        if(midE == target)return mid;
        if(midE<leftE){
            if(target<=rightE && target>midE){
                begin = mid+1;
            }
            else
                end = mid-1;
        }
        else if(midE>rightE){
            if(target>=leftE && target<midE)
                end = mid-1;
            else
                begin = mid+1;
        }
        else{
            if(target>midE)begin=mid+1;
            else end = mid-1;
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
