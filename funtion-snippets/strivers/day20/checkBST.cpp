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
    bool solve(TreeNode* root,long int mn,long int mx){
        if(root==NULL)
            return true;
        return (root->val>mn && root->val<mx && solve(root->left,mn,root->val) && solve(root->right,root->val,mx));
    }
    bool isValidBST(TreeNode* root) {
            return solve(root,-2147483649, 2147483648);
        }
            
            
    
};