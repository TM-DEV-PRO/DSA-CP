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
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}