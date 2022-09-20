#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
// xor->O(n)
int singleNonDuplicate(vector<int>& nums) {
        int xr = nums[0];
        for(int i=1;i<nums.size();i++)
            xr^=nums[i];
        return xr;
}
// bsearch -> O(logn) for sorted array
int singleNonDuplicate(vector<int>& nums) {
       if(nums.size()==1)
           return nums[0];
       int l=0,h=nums.size()-1;
       
        while(l<=h){
            int m = l + (h-l)/2;
            if(m==0){
                if(nums[m]!=nums[m+1])
                    return nums[m];
                else
                    l=m+1;
            }
            
            else if(m==nums.size()-1){
                if(nums[m]!=nums[m-1])
                    return nums[m];
                else
                    h=m-1;
            }
            
            else{
                if(nums[m]!=nums[m-1] && nums[m]!=nums[m+1])
                    return nums[m];
                else if(nums[m]==nums[m-1]){
                    if(m%2==0)
                        h=m-1;
                    else
                        l=m+1;
                }
                
                else{
                    if(m%2==0)
                        l=m+1;
                    else
                        h=m-1;
                }
            }
        }
        
        return nums[l];
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}