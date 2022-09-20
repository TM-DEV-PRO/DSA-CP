#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        
        int i = n-2;
        while(i>=0){
            if(nums[i]<nums[i+1])
                break;
            i--;
        }
        
        if(i==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        
        for(int j = n-1;j>i;j--){
            if(nums[j]>nums[i]){
                swap(nums[j],nums[i]);
                break;
            }
        }
        
        reverse(nums.begin()+i+1,nums.end());
        
        
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}