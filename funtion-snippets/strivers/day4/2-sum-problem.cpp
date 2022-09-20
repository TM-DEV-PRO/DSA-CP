#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++){
            if(mp.find(target - nums[i])!=mp.end())
                return {mp[target-nums[i]],i};
            mp[nums[i]]=i;
        }
        
        return {};
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}
