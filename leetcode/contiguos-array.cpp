// https://leetcode.com/problems/contiguous-array/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

int findMaxLength(vector<int>& arr) {
    int i, n=arr.size(), sum=0, maxLen=0;
    unordered_map <int, int> umap;
    fo(i,n){
        sum += (arr[i]==0?-1:1);
        if(sum ==0){
            maxLen = i+1;
        }else{
            if(umap.find(sum)== umap.end()){
                umap[sum] = i;
            }else{
                maxLen = max(maxLen, i-umap[sum]);
            }
        }
    }        
    return maxLen;
}

int main(){
    vector <int> vec{1,1,0,1,1};
    cout<< findMaxLength(vec);
    return 0;
}