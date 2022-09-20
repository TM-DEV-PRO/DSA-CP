#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
int count =0;
    void merge(vector<int> &nums,int l,int m,int r){
        vector<int> temp;
        int i=l,j=m+1;
        while(i<=m){
            while(j<=r && ceil(nums[i]/2.0)>nums[j])
                j++;
            count+=j-m-1;
            i++;
        }
        i=l,j=m+1;
        while(i<=m && j<=r ){
            if(nums[i]>nums[j]){
                temp.push_back(nums[j]);
                j++;
            }
            else{
                temp.push_back(nums[i]);
                i++;
            }
        }
        
        while(i<=m){
            temp.push_back(nums[i]);
            i++;
        }
        
        while(j<=r){
            temp.push_back(nums[j]);
            j++;
        }
        i=0;
        while(l<=r){
            nums[l] = temp[i];
            l++;
            i++;
        }
        
    
        
    }
    
    void solve(vector<int> &nums, int l,int r){
        
        if(r>l){
            int m = l + (r-l)/2;
            solve(nums,l,m);
            solve(nums,m+1,r);
            merge(nums,l,m,r);
        }
      
    }

    int reversePairs(vector<int>& nums) {
        solve(nums,0,nums.size()-1);
        return count;
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}