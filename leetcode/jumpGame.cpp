// https://leetcode.com/problems/jump-game/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;
   
bool canJump(vector<int>& nums) {
    int i,n = nums.size(), max_index=nums[0];
    if(n==1)return true;  
    for(i=1;i<n;i++){
        if(i<=max_index){
            max_index = max(max_index, i+nums[i]);
        }
        if(max_index>=n-1) return true;
    }
    return false;
}

int main(){
    vector <int> vec{2,3,1,1,4};
    cout<<canJump(vec);
    return 0;
}