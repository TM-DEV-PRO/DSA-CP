#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        
        while(l<=h){
            int m = l + (h-l)/2;
            
            if(nums[m]==target)
                return m;
            if(nums[m]>=nums[l]){
                if(target>=nums[l] && target<nums[m])
                    h=m-1;
                else
                    l=m+1;
            }
        
            else{
                if(target>nums[m]&&target<=nums[h])
                    l=m+1;
                else
                    h=m-1;
            }
                
        }
        
        return -1;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}