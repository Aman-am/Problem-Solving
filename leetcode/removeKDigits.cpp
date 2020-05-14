// https://leetcode.com/problems/remove-k-digits/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

string removeKdigits(string num, int k) {
    int i, slen = num.size();
    if(slen==k) return "0";
    
    while(k--){
        fo(i,slen){
            if(int(num[i]) > int(num[i+1])) {
                num.erase(num.begin()+i);
                i=slen;
            }
        }          
    }
    while(num.size()>1 && num[0]=='0')
        num.erase(num.begin());
    
    return num;
}

int main(){
    string s = "112";
    int i=1;
    cout<< removeKdigits(s,i);
    return 0;
}