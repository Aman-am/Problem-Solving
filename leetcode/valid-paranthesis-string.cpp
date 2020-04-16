// https://leetcode.com/problems/valid-parenthesis-string/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

bool checkValidString(string s) {
    int s_len = s.length() - 1;
    int openCount = 0, closedCount = 0;
    for (int i = 0; i <= s_len; i++)
    {
        if (s[i] == '*' || s[i] == '(') openCount++;
        else openCount--;
        if (s[s_len - i] == '*' || s[s_len - i] == ')') closedCount++;
        else closedCount--;
        if (openCount < 0 || closedCount < 0) return false;
    }
    return true;
}

int main(){
    string s = "(*))";
    cout<< checkValidString(s);
    return 0;
}

