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
bool isIdentical(TreeNode *r1, TreeNode *r2)
    {
        if(r1==NULL && r2==NULL)
            return true;
        if(r1==NULL)
            return false;
        if(r2==NULL)
            return false;
        if(r1->val != r2->val)
            return false;
        return isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}