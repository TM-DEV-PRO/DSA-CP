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
class BSTIterator {
public:
    stack<TreeNode*> st;
    TreeNode* it;
    BSTIterator(TreeNode* root) {
        it=root;
       while(it->left!=NULL){ 
           st.push(it);
           it=it->left;
       }
       st.push(it);
    }
    
    int next() {
        int x = it->val;
        
        if(it->right!=NULL){
            st.pop();
            it=it->right;
            while(it->left!=NULL){
                st.push(it);
                it=it->left;
            }
            
            st.push(it);
        }
        
        else{
            st.pop();
            if(!st.empty())
                it=st.top();
        }
        
        return x;
    }
    
    bool hasNext() {
        if(st.size()>=1)
            return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */