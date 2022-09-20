#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;

// O(n) ->deque

  vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> res;
        
        for(int i=0;i<nums.size();i++){
            int x=0;
            while(!dq.empty()&&x<k&&nums[i]>nums[dq.front()]){
                dq.pop_front();
                x++;
            }
            
            dq.push_front(i);
            
            if(i>=k-1){
                res.push_back(nums[dq.back()]);
                if(i-dq.back()+1>=k)
                    dq.pop_back();
            }
        }
        
        return res;
  }

// TLE
 vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       
        int mx = 0;
        int i=0;
        while(i<k){
            if(nums[i]>=nums[mx])
                mx=i;
            i++;
        }
        vector<int> res;
        res.push_back(nums[mx]);
        while(i<nums.size()){
            if(i-mx+1<=k){
                if(nums[i]>=nums[mx])
                    mx=i;
                res.push_back(nums[mx]);
            }
            else{
                mx++;
                for(int j=mx+1;j<=i;j++)
                    if(nums[j]>=nums[mx])
                        mx=j;
                res.push_back(nums[mx]);
                
            }
            
            i++;
        }
        
        return res;
    }

// TLE
 vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       
        deque<int> dq;
        int i=0;
        priority_queue<int> pq;
        while(i<k){
            pq.push(nums[i]);
            dq.push_front(nums[i]);
            i++;
        }
        vector<int> res;
        res.push_back(pq.top());
        while(i<nums.size()){
            dq.pop_back();
            dq.push_front(nums[i]);
            priority_queue<int> q;
            for(auto it=dq.begin();it!=dq.end();it++)
                q.push(*it);
            res.push_back(q.top());
            
            i++;
        }
        
        return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}