// https://leetcode.com/problems/diameter-of-binary-tree/

#include <bits/stdc++.h>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    int diameter(TreeNode* root, int &height){
        if(root == NULL)return 0;
        
        int ldiameter = diameter(root->left, height);
        int rdiameter = diameter(root->right, height);
        
        height = max(height, ldiameter+rdiameter);
        
        return max(ldiameter,rdiameter) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int height =0;
        diameter(root,height);
        return height;
    }
};