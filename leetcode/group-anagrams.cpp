// https://leetcode.com/problems/group-anagrams/
#include<bits/stdc++.h> 
using namespace std; 
#define fo(i, n) for(i=0; i<n; i++)

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector <vector<string>> res;
    int i,n=strs.size();
    string temp;
    unordered_map<string, vector<string>> umap; 
    fo(i,n){
        temp = strs[i];
        sort(temp.begin(),temp.end());
        umap[temp].push_back(strs[i]);
    }
    unordered_map<string,vector<string>>::iterator t = umap.begin();
    while(t!= umap.end()){
        res.push_back(t->second);
        t++;
    }
    return res;
} 
  
int main() 
{ 
    vector <string> vec{"eat", "tea", "tan", "ate", "nat", "bat"};
    vector <vector<string>> res;
    res = groupAnagrams(vec); 
    int i,j,n=res.size();
    fo(i,n){
        int n2 = res[i].size();
        fo(j,n2){
            cout<<res[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0; 
} 