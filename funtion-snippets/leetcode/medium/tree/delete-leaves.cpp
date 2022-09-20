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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root==NULL)
            return NULL;
        if(root->left==NULL && root->right==NULL)
        {
           if(root->val == target)
                root = NULL;
            
            
            return root;
        }
        
        TreeNode *l = removeLeafNodes(root->left, target);
        TreeNode *r = removeLeafNodes(root->right, target);
        root->left =  l;
        root->right = r;
    
        if(l==NULL && r==NULL)
            if(root->val == target)
                root = NULL;
                
            
        
        
        
        return root;
            
        
    }
};