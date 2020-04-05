// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

int maxProfit(vector<int>& prices) {
    if(!prices.size()) {return 0;}
    int i=0, min = prices[0], diff=0;
    fo(i,prices.size()){
        if(prices[i]<min){
            min = prices[i];
        }else{
            diff = max(diff, prices[i]-min);
        }
    }
    return diff; 
}

int main(){
    vector <int> vec{7,6,4,3,1};
    cout<< maxProfit(vec);
    return 0;
}