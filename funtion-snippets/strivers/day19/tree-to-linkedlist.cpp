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
      TreeNode* tail;
public:
  
    TreeNode* solve(TreeNode*  root){
        if(root==NULL)
            return root;
        if(root->left==NULL)
            tail=root;
        TreeNode* temp = root->right;
       
        
        if(root->left!=NULL)
            root->right = solve(root->left);
        root->left=NULL;
        if(temp!=NULL){
            TreeNode* tl = tail;
            tl->right = solve(temp);
        }
        return root;
    }
    void flatten(TreeNode* root) {
        
            solve(root);
        
    }
};