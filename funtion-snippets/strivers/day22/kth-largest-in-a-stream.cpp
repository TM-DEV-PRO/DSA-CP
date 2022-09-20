#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
class KthLargest {
public:
    
    priority_queue<int,vector<int>,greater<int>> pq;
    
    int K;
    KthLargest(int k, vector<int>& nums) {
        K=k;
        for(int i=0;i<nums.size() && i<k;i++)
            pq.push(nums[i]);
        
        for(int i=k;i<nums.size();i++){
            if(nums[i]>pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }     
    }
    
    int add(int val) {
        if(pq.size()<K)
            pq.push(val);
        else if(val>pq.top()){
            pq.pop();
            pq.push(val);
        }
        
       
        
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}