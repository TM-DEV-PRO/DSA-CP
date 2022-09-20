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
    
    
  TreeNode* insert(int i, int j, vector<int> &nums){
      
      if(i>j)
          return NULL;
      
      int mx = i;
      
      for(int k=i+1;k<=j;k++){
          if(nums[k]>nums[mx])
              mx=k;
      }
      
      TreeNode *temp = new TreeNode(nums[mx]);
      
      temp->left = insert(i,mx-1,nums);
      temp->right = insert(mx+1,j,nums);
      
      return temp;
  }
    
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
      
      return insert(0,nums.size()-1,nums);  
        
    }
};