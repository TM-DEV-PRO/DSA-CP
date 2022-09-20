#include <limits.h>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <iterator>
using namespace std;
   int rob(vector<int>& nums) {
      
        int n = nums.size();
        if(n==1)
            return nums[0];
        int dp[n] ;
        dp[n-1] = nums[n-1];
        dp[n-2] = max(nums[n-2],nums[n-1]);
        
        for(int i = n-3;i>=0;i--){
            dp[i] = max(dp[i+1],dp[i+2]+nums[i]);
        }
        
        return dp[0];
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}