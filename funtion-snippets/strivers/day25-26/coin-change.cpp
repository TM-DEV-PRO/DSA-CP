class Solution {
public:
    int dp[13][10001];
    int solve(vector<int> &nums,int i,int amt){
        if(amt==0)
            return 0;
        if(i==nums.size()){
            if(amt==0)
                return 0;
            else
                return INT_MAX-1;
        }
        if(dp[i][amt]!=-1)
            return dp[i][amt];
        int taken = INT_MAX;
        if(nums[i]<=amt){
             if(dp[i][amt-nums[i]]==-1)
                 dp[i][amt-nums[i]] = solve(nums,i,amt-nums[i]);
            taken = 1 + dp[i][amt-nums[i]];
        }
        
        if(dp[i+1][amt]==-1)
            dp[i+1][amt] = solve(nums,i+1,amt);
        
        return min(taken,dp[i+1][amt]);
            
        
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int res = solve(coins,0,amount);
        return (res>=INT_MAX-1)?-1:res;
    }
};