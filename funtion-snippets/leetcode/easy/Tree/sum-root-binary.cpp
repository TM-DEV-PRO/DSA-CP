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
 void toNum(TreeNode *root, int num, int &ans){
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL){
            num = num*2 + root->val; 
            ans+=num;
            return;
        }
        num = num*2 + root->val;
        toNum(root->left, num, ans);
        toNum(root->right, num, ans);
        
        return;
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}