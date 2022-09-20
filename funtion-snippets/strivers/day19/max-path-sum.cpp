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
    int mxSum = INT_MIN;
    int solve(TreeNode* root){
        if(root==NULL)
            return 0;
        int lmax = solve(root->left);
        int rmax = solve(root->right);
        
        mxSum = max(mxSum,lmax+rmax+root->val);
        mxSum = max(mxSum,root->val);
        mxSum = max(mxSum,lmax+root->val);
        mxSum = max(mxSum,rmax+root->val);
        if(root->left!=NULL)
            mxSum = max(mxSum,lmax);
        if(root->right!=NULL)
            mxSum = max(mxSum,rmax);
        
        return max(root->val,root->val + max(lmax,rmax));
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return mxSum;
    }
};