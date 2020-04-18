// https://leetcode.com/problems/number-of-islands/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

int findMinPathSum(vector<vector<int>>& grid, int r, int c) {
    int i, j, count=0;
    if(r<0 || c<0)return INT_MAX;
    else if(r==0 && c==0) return grid[r][c];
    else return grid[r][c] + min(findMinPathSum(grid,r-1,c),findMinPathSum(grid,r,c-1));
}
int minPathSum(vector<vector<int>>& grid) {
    int r= grid.size(), c=0;
    if(r) c=grid[0].size();
    return findMinPathSum(grid, r-1, c-1);
}

int main(){
    vector<vector<int>> vec{{1,3,1},{1,5,1},{4,2,1}};
    cout<< minPathSum(vec);
    return 0;
}