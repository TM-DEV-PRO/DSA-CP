int maxSumIS(int arr[], int n)  
	{  
        int dp[n];
        int mxSum = arr[0];
        dp[0] = arr[0];
        for(int i=1;i<n;i++){
            dp[i] = arr[i];
            for(int j=0;j<i;j++){
               if(arr[i]>arr[j])
                   dp[i] = max(dp[i],dp[j]+arr[i]) ;
            }
            
            mxSum = max(mxSum,dp[i]);
        }
        
        return mxSum;
	}