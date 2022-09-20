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
 int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)
            return 0;
        int sum = 0;
        if(root->val>=low && root->val<=high)
            sum+=root->val;
        return sum+rangeSumBST(root->left,low,high)+rangeSumBST(root->right,low,high);
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}