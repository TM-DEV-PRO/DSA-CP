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
 int dia = -1;
    int solve(TreeNode*root){
        if(root==NULL)
            return 0;
        int lh = solve(root->left);
        int rh = solve(root->right);
        int h = 1+max(lh,rh);
        dia =  max(dia,lh + rh);
        return h;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
       solve(root);
       return dia;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}