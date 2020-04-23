// https://www.geeksforgeeks.org/print-a-given-matrix-in-spiral-form/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, k, n) for(i=k; i<n; i++)

using namespace std;

void spiral(vector<vector<int>>& arr) {
    int m= arr.size(), n=arr[0].size();
    int i, j, k=0, l=0;

    while(k<m && l<n){
        // Print first row
        fo(i,l,n){
            cout<<arr[k][i]<<" ";
        }
        k++;

        // Print last col
        fo(i,k,m){
            cout<<arr[i][n-1]<<" ";
        }
        n--;

        // Print last row
        if(k<m){
            for(i=n-1;i>=l;i--){
                cout<<arr[m-1][i]<<" ";
            }
            m--;
        }

        // Print first col
        if(l<n){
            for(i=m-1;i>=k;i--){
                cout<<arr[i][l]<<" ";
            }
            l++;
        }
    }
}

int main(){
    vector<vector<int>> vec{{1,3,1},{1,5,1},{4,2,1}};
    spiral(vec);
    return 0;
}