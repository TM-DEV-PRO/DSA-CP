#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int j=i+1, k=n-1;
            while(j<k){
                if(j>i+1 && nums[j]==nums[j-1]){
                    j++;
                    continue;
                }
                int temp = nums[i] + nums[j] + nums[k];
            
                if(temp==0){
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                
                else if(temp>0)
                    k--;
                else
                    j++;                
            }
        }
        
        return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}