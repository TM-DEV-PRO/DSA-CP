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
 void sol(TreeNode* root, vector<int> &num){
        if(root==NULL)
            return;
        sol(root->left,num);
        num.push_back(root->val);
        sol(root->right,num);
        return;
    }

    int getMinimumDifference(TreeNode* root) {
        vector<int> num;
        sol(root,num);
        int ans = INT_MAX;
        for(int i=1;i<num.size();i++){
            ans = min(ans,abs(num[i]-num[i-1]));
        }
        
        return ans;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}