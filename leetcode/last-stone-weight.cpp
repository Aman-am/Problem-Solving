// https://leetcode.com/problems/last-stone-weight/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int lastStoneWeight(vector<int>& arr) {
        int i, count=0;
        vector<int>::iterator it;
        while(arr.size()>1){
            sort(arr.begin(),arr.end(), greater<int>());
            it = arr.begin();
            int diff = arr[0]-arr[1];
            if(diff){
                arr[0] = diff;
                arr.erase(it+1);
            }else{
                arr.erase(it);
                arr.erase(it);
            }
        }
        if(arr.size()==1)return arr[0];
        return 0;
    }

int main(){
    vector <int> vec{2,7,4,1,8,1};
    cout<< lastStoneWeight(vec);
    return 0;
}