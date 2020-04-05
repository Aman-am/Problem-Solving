// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    int n=prices.size();
    for(int i = 1; i < n; i++) {
        if(prices[i] - prices[i-1]>0) {
            maxProfit += (prices[i] - prices[i-1]);
        }
    }
    return maxProfit;
}

int main(){
    vector <int> vec{1,2,3,4,5};
    cout<< maxProfit(vec);
    return 0;
}