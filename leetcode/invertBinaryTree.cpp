/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
// Recursive Implementation
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr)
            return nullptr;
        TreeNode* temp = root->right;
        root->right = root->left;
        root->left = temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }

// Queue Implementation
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr)
            return nullptr;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* current = q.front();
            q.pop();
            TreeNode* temp = current->right;
            current->right = current->left;
            current->left = temp;
            if(current->left!= nullptr) q.push(current->left);
            if(current->right!= nullptr) q.push(current->right);
        }
        return root;
    }
};