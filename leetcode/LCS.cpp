#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<=n; i++)
using namespace std;

int longestCommonSubsequence(string text1, string text2) {
        int l1 = text1.size(), l2 = text2.size();
        int dp[l1+1][l2+1];
        int i,j;
        fo(i,l1){
            fo(j,l2){
                if (i == 0 || j == 0)  
                    dp[i][j] = 0;  

                else if (text1[i - 1] == text2[j - 1])  
                    dp[i][j] = dp[i - 1][j - 1] + 1;  

                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);  
                }  
        }
        return dp[l1][l2];
}

int main(){
    string a = "abcde", b="ace";
    cout<<longestCommonSubsequence(a,b);
    return 0;
}