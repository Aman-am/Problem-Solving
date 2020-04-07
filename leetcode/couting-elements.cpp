// https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3289/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

int countElements(vector<int>& arr) {
        int i, n= arr.size(),count=0;

        set <int> s;
        fo(i,n){
            s.insert(arr[i]);
        }
        fo(i,n){
            if(s.find(arr[i]+1) != s.end() )count++;
        }
        return count;
    }

int main(){
    vector <int> vec{1,1,2,2};
    cout<< countElements(vec);
    return 0;
}