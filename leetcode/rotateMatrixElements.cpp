#include <iostream>
#include <bits/stdc++.h>
#define fo(i, k, n) for(i=k; i<n; i++)

using namespace std;

void rotateMatrix(vector<vector<int>>& arr) {
    int m= arr.size(), n=arr[0].size();
    int i, curr, prev, row=0, col=0;

    while(row<m && col<n){

        if(row == m-1 && col == n-1)break;
        prev = arr[row+1][0];
        // first row
        fo(i,col,n){
            curr = arr[row][i];
            arr[row][i] = prev;
            prev =curr;
        }
        row++;

        // Print last col
        fo(i,row,m){
            curr = arr[i][n-1];
            arr[i][n-1] = prev;
            prev =curr;
        }
        n--;

        // Print last row
        if(row<m){
            for(i=n-1;i>=col;i--){
                curr = arr[m-1][i];
                arr[m-1][i] = prev;
                prev =curr;
            }
            m--;
        }

        // Print first col
        if(col<n){
            for(i=m-1;i>=row;i--){
                curr = arr[i][col];
                arr[i][col] = prev;
                prev =curr;
            }
            col++;
        }
    }

    m= arr.size(), n=arr[0].size();

    // Print rotated matrix 
    for (i=0; i<m; i++) 
    { 
        for (int j=0; j<n; j++) 
          cout << arr[i][j] << " "; 
        cout << endl; 
    } 
}

int main(){
    vector<vector<int>> vec{{1,3,1},{1,5,1},{4,2,1}};
    rotateMatrix(vec);
    return 0;
}