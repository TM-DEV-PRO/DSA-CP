#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        unordered_set<int> st;
        set<vector<int>> res;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                
                for(int k=j+1;k<nums.size();k++){
                    int temp = target-nums[i]-nums[j]-nums[k];
                    if(st.find(temp)!=st.end())
                        res.insert({nums[i],nums[j],nums[k],temp});
                    st.insert(nums[k]);
                }
                
                st.clear();
            }
        }
        vector<vector<int>> ans;
        for(auto it = res.begin();it!=res.end();it++)
            ans.push_back(*it);
        return ans;
        
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}