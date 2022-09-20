class Solution {
public:
    int dp[1001][1001];
    int solve(string s1,string s2,int i1, int i2){
        if(i1<=0 || i2<=0)
            return 0;
        if(dp[i1][i2]!=-1)
            return dp[i1][i2];
        if(s1[i1-1]==s2[i2-1]){
            if(dp[i1-1][i2-1]!=-1)
                return dp[i1][i2] = 1 + dp[i1-1][i2-1];
            return dp[i1][i2] = 1+solve(s1,s2,i1-1,i2-1);
        }
        if(dp[i1-1][i2]==-1)
            dp[i1-1][i2] = solve(s1,s2,i1-1,i2);
        if(dp[i1][i2-1]==-1)
            dp[i1][i2-1] = solve(s1,s2,i1,i2-1);
        return dp[i1][i2] = max(dp[i1-1][i2],dp[i1][i2-1]);
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        return solve(text1, text2, text1.length(), text2.length());
    }
};