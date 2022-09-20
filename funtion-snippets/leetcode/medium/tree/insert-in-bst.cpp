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
    void insert(TreeNode *root, int val){
        if(root==NULL)
            return;
        
        if(val>root->val){
            if(root->right==NULL){
                TreeNode *temp = new TreeNode(val);
                root->right = temp;
                return;
            }
            
            else return insert(root->right,val);
        }
        
          else {
            if(root->left==NULL){
                TreeNode *temp = new TreeNode(val);
                root->left = temp;
                return;
            }
            
            else return insert(root->left,val);
        }
    }
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            TreeNode *temp = new TreeNode(val);
            return temp;
        }
        
       insert(root, val);
        
        return root;
    }
};