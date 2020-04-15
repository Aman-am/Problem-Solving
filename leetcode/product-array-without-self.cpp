// https://leetcode.com/problems/product-of-array-except-self/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int i, n= nums.size(), temp;

    vector <int> res;
    fo(i,n){
        if(i==0)res[i]=nums[i];
        else res[i] = res[i-1] * nums[i];
    }
    res[n-1] = res[n-2];
    temp = nums[n-1];
    for(i=n-2;i>0;i--){
        res[i] = res[i-1]*temp;
        temp *= nums[i];
    }
    res[0] = temp;
    return res;
}

int main(){
    vector <int> vec{1,2,3,4};
    vec= productExceptSelf(vec);
    int i;
    fo(i,vec.size())cout<<vec[i]<<" ";
    return 0;
}