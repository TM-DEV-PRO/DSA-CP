#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
vector<vector<int>> perms;
    void solve(vector<int> nums, int curr, vector<int> op){
        if(curr==nums.size()){
            perms.push_back(op);
            return;
        }
        
        for(int i=curr;i<nums.size();i++){
            op.push_back(nums[i]);
            vector<int> ip = nums;
            int temp = ip[i];
            int j= i;
            while(j>curr){
                ip[j]=ip[j-1];
                j--;
            }
            ip[curr]=temp;
            solve(ip,curr+1,op);
            op.pop_back();
                
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums, 0, {} );
        return perms;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}