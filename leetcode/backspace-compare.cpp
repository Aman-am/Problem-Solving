// https://leetcode.com/problems/backspace-string-compare/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

bool backspaceCompare(string s, string t) {
    int s_len = s.length();
    int t_len = t.length();
    if(s_len ==0 && t_len == 0)return true;
    int scount=0,tcount=0;
    string s_temp, t_temp;
    for(int i = s_len-1;i>=0;i--){
        if(s[i] != '#'){
            if(scount==0){
                s_temp+=s[i];
            }else{
                scount--;
            }
        }else{
            scount++;
        }
    }
    for(int i = t_len-1;i>=0;i--){
        if(t[i] != '#'){
            if(tcount==0){
                t_temp+=t[i];
            }else{
                tcount--;
            }
        }else{
            tcount++;
        }
    }
    if(s_temp == t_temp) return true;
    return false;
}

int main(){
    string s = "a#c", t = "b";
    cout<< backspaceCompare(s,t);
    return 0;
}

