class Solution {
public:
    int dp[503][503];
    int solve(vector<int> &nums,int i,int j){
        if(i>=j)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans = INT_MIN;
        for(int k=i;k<j;k++){
            int temp = solve(nums,i,k) + solve(nums,k+1,j) + nums[i-1]*nums[k]*nums[j];
            ans=max(ans,temp);
        }
        
        return dp[i][j] = ans;
    }
    int maxCoins(vector<int>& nums) {
        nums.push_back(1);
        nums.insert(nums.begin()+0,1);
        memset(dp,-1,sizeof(dp));
        return solve(nums,1,nums.size()-1);
    }
};