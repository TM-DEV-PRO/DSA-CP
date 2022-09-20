#include <limits.h>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <iterator>
using namespace std;
struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
   void seq(TreeNode *root, vector<int> &l){
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
            l.push_back(root->val);
        seq(root->left,l);
        seq(root->right,l);
    }
 bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> l1,l2;
        seq(root1,l1);
        seq(root2,l2);
        
        if(l1==l2)
            return true;
        else
            return false;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}