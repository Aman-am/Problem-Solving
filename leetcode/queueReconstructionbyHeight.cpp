// https://leetcode.com/problems/number-of-islands/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        // Custom Sorting   
        sort(people.begin(), people.end(), [](vector<int>& a, vector<int>& b) {
            return a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]);
        });
        
        int i,n = people.size();
        vector<vector<int>> res;
        fo(i,n){
            res.insert(res.begin() + people[i][1], people[i]);
        }
        return res;
    }

int main(){
    vector<vector<int>> vec{{7,0},{4,4},{7,1},{5,0},{6,1},{5,2}};
    vector<vector<int>> res;
    res = reconstructQueue(vec);
    int i,n=res.size();
    fo(i,n){
        cout<<res[i][0]<<" "<<res[i][1]<<endl;
    }

    return 0;
}