int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    bool dp[n+1][B+1];
    
   
    for(int i=0;i<=B;i++)
            dp[0][i] = false;
    for(int i=0;i<=n;i++)
            dp[i][0] = true;
  
     for(int i=1;i<=n;i++){
        for(int j=1;j<=B;j++){
            if(j<A[i-1])
                dp[i][j] = dp[i-1][j];
            
            else
                dp[i][j] = dp[i-1][j] || dp[i-1][j-A[i]];
     
        }
      
     }
    
    
    return dp[n][B];
        
    
}
