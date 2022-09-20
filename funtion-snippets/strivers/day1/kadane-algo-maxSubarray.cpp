#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currSum = nums[0];
        
        for(int i=1;i<nums.size();i++){
            currSum = max(currSum + nums[i],nums[i]);
            maxSum = max(currSum,maxSum);
        }
        
        return maxSum;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}