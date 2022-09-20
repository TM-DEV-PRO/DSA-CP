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
    bool findTarget(TreeNode* root, int k) {
        if(root->left==NULL && root->right==NULL)
            return false;
        unordered_set<int> check;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode * temp = q.front();
            q.pop();
            if(check.find(k-temp->val)!=check.end())
                return true;
            else
                check.insert(temp->val);
            if(temp->left!=NULL)q.push(temp->left);
            if(temp->right!=NULL)q.push(temp->right);
        }
        return false;
    }
};