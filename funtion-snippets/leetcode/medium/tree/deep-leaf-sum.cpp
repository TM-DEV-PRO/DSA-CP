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
    int height(TreeNode *root){
        if(root==NULL)
            return 0;
        return 1 + max(height(root->left),height(root->right));
    }
    
    int sum(TreeNode *root, int curr, int deep){
        
        if(root==NULL)
            return 0;
        
        if(curr==deep)
            return root->val;
        
        
        return sum(root->left, curr+1, deep) + sum(root->right, curr+1, deep); 
        
    }
public:
    int deepestLeavesSum(TreeNode* root) {
        int h = height(root);
        
        return sum(root, 1, h);
        
    }
};