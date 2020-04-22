// https://leetcode.com/problems/subarray-sum-equals-k/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)
using namespace std;

int subarraySum(vector<int>& arr, int k) {
    int i, j, n=arr.size(), count=0, sum=0;
    unordered_map<int, int> umap;
        umap[0]=1;
    fo(i,n){
        sum+=arr[i];
        if(umap[sum-k])count+=umap[sum-k];
    
        umap[sum]++;          
    }
    return count;
}

int main(){
    vector <int> vec{1,1,1};
    int k =2;
    cout<< subarraySum(vec, k);
    return 0;
}