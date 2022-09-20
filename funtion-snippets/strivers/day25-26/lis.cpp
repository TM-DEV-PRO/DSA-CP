// O(n2)->memoization
class Solution {
public:
    int dp[2501][2501];
    int solve(vector<int> &nums,int curr,int prev){
        if(curr==nums.size())
            return 0;
        int taken = 0;

        if(dp[prev+1][curr]!=-1)
            return dp[prev+1][curr];
        if(prev<0 || nums[curr]>nums[prev]){
            
            taken = 1 +  solve(nums,curr+1,curr);
        }
        
        
        return dp[prev+1][curr] = max(taken, solve(nums,curr+1,prev));

        
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0,-1);
    }
};

// O(n2) dp

class Solution {
public:
 
    int lengthOfLIS(vector<int>& nums) {
        int dp[nums.size()];
        int mxlen = 1;
        dp[0] = 1;
        for(int i=1;i<nums.size();i++){
            dp[i] = 1;
            for(int j=0;j<i;j++){
               if(nums[i]>nums[j])
                   dp[i] = max(dp[i],dp[j]+1) ;
            }
            
            mxlen = max(mxlen,dp[i]);
        }
        
        return mxlen;
    }
};

// O(nlogn)

 int lengthOfLIS(vector<int>& nums) {
      vector<int> dp;
        int len = 0;
        for(auto num:nums){
            int i = lower_bound(dp.begin(),dp.end(),num)-dp.begin();
            cout<<i<<" ";
            if(i==dp.size())
                dp.push_back(num);
            else 
                dp[i] = num;
        }
        
        return dp.size();
    }