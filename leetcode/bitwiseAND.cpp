// https://leetcode.com/problems/move-zeroes/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, k, n) for(i=k; i<=n; i++)

using namespace std;

int msb(int n){
    int count=-1;
    while(n>0){
        n= n>>1;
        count++;
    }
    return count;
}  

int rangeBitwiseAnd(int m, int n) {
    int res =0;

    while(m && n){
        int msm = msb(m), msn = msb(n);
        if(msm != msn)break;
        int msb_val = (1<<msm);     
        res += msb_val;

        m -= msb_val;
        n -= msb_val;
    }
    return res;
}

int main(){
    int m=5, n=7;
    cout<<rangeBitwiseAnd(m,n);
    return 0;
}