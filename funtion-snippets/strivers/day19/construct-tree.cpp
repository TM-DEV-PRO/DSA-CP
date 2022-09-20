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
    int r = 0;
    TreeNode* solve(vector<int>& pre, vector<int>& in, int i, int j){
        if(i>j)
            return NULL;
           
        TreeNode *root = new TreeNode(pre[r++]);
        int pos;
        for(int k=i;k<=j;k++){
            if(in[k]==pre[r-1]){
                pos=k;
                break;
            }
        }
        
        root->left = solve(pre,in,i,pos-1);
        root->right = solve(pre,in,pos+1,j);
        
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder){
        return solve(preorder, inorder, 0, inorder.size()-1);
    }
};