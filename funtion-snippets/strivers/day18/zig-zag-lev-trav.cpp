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
 vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)
            return {};
        vector<vector<int>> res;
        
        queue<TreeNode*> q;
        q.push(root);
        int f=0;
        while(!q.empty()){
            int n = q.size();
            vector<int> lev;
            for(int i=0;i<n;i++){
                TreeNode *temp = q.front();
                q.pop();
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
                lev.push_back(temp->val);
            }
            if(f==0)
                f=1;
            else if(f==1){
                f=0;
                reverse(lev.begin(),lev.end());
            }
            res.push_back(lev);
        }
        return res;
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}