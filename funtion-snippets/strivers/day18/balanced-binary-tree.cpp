#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        if(root->left==NULL && root->right==NULL){
            root->val = 1;
            return true;
        }
        bool b1 = isBalanced(root->left);
        bool b2 = isBalanced(root->right);
        int lh = (root->left==NULL)?0:root->left->val;
        int rh = (root->right==NULL)?0:root->right->val;
        root->val = 1 + max(lh,rh);
        if(abs(lh-rh)>1)
            return false;
        return b1&&b2;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}