// https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3299/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

string stringShift(string s, vector<vector<int>>& shift) {
        int i,s_len = s.length(), move=0;

        fo(i, shift.size()){
            if(shift[i][0] == 0)move-=shift[i][1];
            else move+=shift[i][1];
        }
        move = move % s_len;
        if(move !=0){
            string res = s;
            fo(i,s_len){
                int t = (((i+move)%s_len)+s_len)%s_len;
                res[t] = s[i];
            }
            return res;
        }
        return s;
}

int main(){
    vector<vector<int>> shift = {{0,7},{1,7},{1,0},{1,3},{0,3},{0,6},{1,2}};
    string s = "wpdhhcj";
    cout<< stringShift(s,shift);
    return 0;
}