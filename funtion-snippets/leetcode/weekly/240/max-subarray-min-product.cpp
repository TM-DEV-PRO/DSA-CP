class Solution {
public:
    int maxSumMinProduct(vector<int>& nums) {
        int n = nums.size();
        vector<long long int> preSum(n+1);
        
        for(int i=1;i<=n;i++)
            preSum[i] = nums[i-1] + preSum[i-1];
        
        stack<int> s,s2;
        
        s.push(0);
        int l[n], r[n];
        for(int i=0;i<n;i++){
            
            while(!s.empty() && nums[s.top()]>=nums[i])
                s.pop();
            
            l[i] = (s.empty())?0:s.top()+1;
            s.push(i);
            
        }
        s2.push(n-1);
        for(int i=n-1;i>=0;i--){
         
            while(!s2.empty() && nums[s2.top()]>=nums[i])
                s2.pop();
            r[i] = (s2.empty())?n-1:s2.top()-1;
            s2.push(i);
           
        }
        
        long int ans = nums[0]*(preSum[r[0]+1] - preSum[l[0]]);
        
        for(int i=1;i<n;i++){
            
            long int temp = nums[i]*(preSum[r[i]+1] - preSum[l[i]]);
            ans = max(ans,temp);
        }
        
        // for(int i=0;i<n;i++){
        //     cout<<l[i]<<" "<<r[i]<<endl;
        // }
        
        
        return ans%1000000007;
        
    }
};