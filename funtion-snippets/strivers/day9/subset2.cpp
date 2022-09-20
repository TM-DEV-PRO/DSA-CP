#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 static vector<vector<int>> solve(vector<int> &nums, int n){
        if(n==0)
            return {{}};
        vector<vector<int>> temp = solve(nums,n-1);
        
        vector<vector<int>> sets;
        
       
     
        for(auto &i:temp){
            sets.push_back(i);
            i.push_back(nums[n-1]);
            sets.push_back(i);
        }
        
        return sets;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res = solve(nums,nums.size());
        
        set<vector<int>> st;
        
        for(auto i:res)
            st.insert(i);
        res.clear();
        for(auto it=st.begin();it!=st.end();it++){
            res.push_back(*it);
        }
        
        return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}

