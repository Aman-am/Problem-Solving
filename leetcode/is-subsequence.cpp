// https://leetcode.com/problems/is-subsequence/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

bool isSubsequence(string s, string t) {
        int s_len = s.length();
        int t_len = t.length();
        if(s_len ==0 && s_len == 0)return true;
        int i=0,j=0;
        fo(i,t_len){
            if(s[j]==t[i])j++;
            if(j==s_len)return true;
        }
        
    return false;        
    }

int main(){
    string s = "axc", t = "ahbgdc";
    cout<< isSubsequence(t,s);
    return 0;
}