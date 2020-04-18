// https://leetcode.com/problems/number-of-islands/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

void findIsland(int i, int j, vector<vector<char>>& grid) {
    int t, r= grid.size(), c=grid[0].size();
    if( i < 0 or j < 0 or i >= r or j >= c || grid[i][j] != 1) return;

    grid[i][j]=0;
    int x[4]={1,0,0,-1}, y[4]={0,1,-1,0};
    fo(t,4){
        findIsland(i+x[t], j+y[t],grid);
    }
}

int numIslands(vector<vector<char>>& grid) {
    int i, j, r= grid.size(), c=0, count=0;
    if(r) c=grid[0].size();
    fo(i,r){
        fo(j,c){
            if(grid[i][j]==1){
            findIsland(i,j,grid);
            count++;
            }
        }
    }
    return count;
}

int main(){
    vector<vector<char>> vec{{1,1,1,1,0},{1,1,0,1,0},{1,1,0,0,0},{0,0,0,0,0}};
    cout<< numIslands(vec);
    return 0;
}