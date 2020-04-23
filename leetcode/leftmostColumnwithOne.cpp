// https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/530/week-3/3306/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
    vector<int> arr = binaryMatrix.dimensions();
    int n = arr[0], m = arr[1];
    int r=0,c=m-1, temp =0;
    while(c>=0 && r<n){
        if(binaryMatrix.get(r,c) == 0){
            r++;
        }else{
            temp = c;
            c--;
        }
    }
    if(temp ==0 && c!=-1) return -1;
    return temp;
}

int main(){
    vector<vector<int>> vec{{0,0},{0,1}};
    cout<< leftMostColumnWithOne(vec);
    return 0;
}