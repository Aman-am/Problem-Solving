// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3350/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

void reverseString(vector<char>& s) {
        int i,s_len = s.size();
        int l=0,r=s_len-1;
        while(r>l){
            swap(s[l],s[r]);
            l++;
            r--;
        }
}

int main(){
    vector<char> s = {'h','e','l','l','o'};
    reverseString(s);
    int i,s_len = s.size();
    fo(i,s_len){
        cout<<s[i]<<" ";
    }
    return 0;
}