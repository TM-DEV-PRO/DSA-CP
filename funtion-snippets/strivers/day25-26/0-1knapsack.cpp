 int solve(int W, int wt[], int val[], int n, vector<vector<int>> &dp){
        if(n==0 || W<=0)
            return 0;
        if(dp[n][W]!=-1)
            return dp[n][W];
        int taken = 0;
        if(wt[n-1]<=W){
            if(dp[n-1][W-wt[n-1]]==-1)
                dp[n-1][W-wt[n-1]] = solve(W-wt[n-1],wt,val,n-1,dp);
            taken = val[n-1] + dp[n-1][W-wt[n-1]];
            
        }
        if(dp[n-1][W]==-1)
            dp[n-1][W] = solve(W,wt,val,n-1,dp);
        return max(taken,dp[n-1][W]);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    {   
        vector<vector<int>> dp(n+2,vector<int>(W+2,-1));
       
       return solve(W,wt,val,n,dp);
    }