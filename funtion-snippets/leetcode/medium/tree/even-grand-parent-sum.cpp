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
    int sum(TreeNode *root){
        if(root==NULL)
            return 0;
        int ans = sum(root->left) + sum(root->right);
        if(root->val%2==0){
            if(root->left!=NULL){
                if(root->left->left!=NULL)
                    ans+=root->left->left->val;
                if(root->left->right!=NULL)
                    ans+=root->left->right->val;
            }

             if(root->right!=NULL){
                if(root->right->left!=NULL)
                    ans+=root->right->left->val;
                if(root->right->right!=NULL)
                    ans+=root->right->right->val;
            }
        }
        
        return ans;
    }
public:
    int sumEvenGrandparent(TreeNode* root) {
        return sum(root);
    }
};