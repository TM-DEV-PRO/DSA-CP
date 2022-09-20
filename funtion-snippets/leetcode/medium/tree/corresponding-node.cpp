/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */



class Solution {
    
string path(TreeNode* root, TreeNode* target, string res){
    
    if(root==NULL)
        return "";
    
    if(root==target)
        return res;
    string i1 = res, i2= res;
    i1.push_back('L');
    i2.push_back('R');
    string s1 = path(root->left,target,i1);
    string s2 = path(root->right,target,i2);
    
    if(s1.length()>0)
        return s1;
    return s2;
        
}

public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        string p = path(original,target,"");
        
        for(auto i:p){
            if(i =='L')
                cloned = cloned->left;
            else
                cloned = cloned->right;
        }
        
        return cloned;
    }
};