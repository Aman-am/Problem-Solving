// https://www.geeksforgeeks.org/print-a-given-matrix-in-spiral-form/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

int twoCitySchedCost(vector<vector<int>>& arr) {
    int n = arr.size();
    int i, j, k=n/2, l=n/2,cost=0;
    vector <int> diff;
    fo(i,n){
        cost+= arr[i][0];
        diff.push_back(arr[i][1] - arr[i][0]);
    }
    
    sort(diff.begin(), diff.end());
    
    fo(i,n/2){
        cost+= diff[i];
    }
    return cost;
}

int main(){
    vector<vector<int>> vec{{10,20},{30,200},{40,50},{30,20}};
    cout<<twoCitySchedCost(vec);
    return 0;
}