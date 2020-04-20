// https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

//  Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
void ins(TreeNode* &root, int num){
    if(root == NULL) root= new TreeNode(num);
    if(num<root->val) ins(root->left, num);
    if(num>root->val) ins(root->right, num);
}

TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = NULL;
        int i;
        fo(i,preorder.size()){
            ins(root,preorder[i]);
        }                
        return root;
    }
int main(){
    vector<int> preOrder = {8,5,1,7,10,12};
    TreeNode* root;
    root = bstFromPreorder(preOrder);
    return 0;
}        
};

