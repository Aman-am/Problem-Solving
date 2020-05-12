// https://leetcode.com/problems/first-bad-version/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

int firstBadVersion(int n) {
    int begin = 1, end = n, mid;
    
    while(begin<=end){
        mid = begin + (end-begin)/2;
        if(mid==end)break; 
        if(isBadVersion(mid) == 1) end = mid;
        if(isBadVersion(mid) == 0) begin = mid+1;
    }
    return mid;
}

int main(){
    return 0;
}