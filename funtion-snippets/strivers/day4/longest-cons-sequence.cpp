#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;

// O(n2) solution
 int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(auto i:nums)
            st.insert(i);
        
        int res = 0;
        
        for(auto i:nums){
            int temp = 0;
            while(true){
                if(st.find(i--)==st.end())
                    break;
                else
                    temp++;
            }
            
            res = max(res,temp);
        }
        
        return res;
}

// nlogn solution
int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return 1;
        sort(nums.begin(),nums.end());
        
        int res = 0;
        int curr = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1)
                curr++;
            else if(nums[i]-nums[i-1]==0)
                curr=curr;
            else
                curr=1;
            
            res = max(res,curr);
        }
        
        return res;
}

// O(n) solution
 int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        unordered_set<int> st;
        for(auto i:nums)
            st.insert(i);
        
        int res = 0;
        
        for(auto it=st.begin();it!=st.end();it++){
            int i = *it;
            int temp = 0;
            if(st.find(i-1)==st.end()){
                //cout<<i<<" ";
                while(true){
                if(st.find(i++)==st.end())
                    break;
                else
                    temp++;
                }
            }
            
            res = max(res,temp);
        }
        
        return res;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}