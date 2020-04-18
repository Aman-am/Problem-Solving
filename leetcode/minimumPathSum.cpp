// https://leetcode.com/problems/minimum-path-sum/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, k, n) for(i=k; i<=n; i++)

using namespace std;

int findMinPathSum(vector<vector<int>>& grid, int r, int c) {
    int i, j, count=0;
    // Total cost array
    int tc[r+1][c+1];
    tc[0][0] = grid[0][0];
    fo(i,1,c)   tc[0][i] = tc[0][i-1] + grid[0][i];
    fo(i,1,r)   tc[i][0] = tc[i-1][0] + grid[i][0];

    fo(i,1,r)
        fo(j,1,c) tc[i][j] = grid[i][j] + min(tc[i][j-1], tc[i-1][j] );

    return tc[r][c];
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