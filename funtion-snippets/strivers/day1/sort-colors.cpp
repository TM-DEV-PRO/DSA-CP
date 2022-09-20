class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=-1,k=nums.size(),j=0;
        
        while(j<k){
            if(nums[j]==0){
                i++;
                swap(nums[i],nums[j]);
                j++;
            }
            
            else if(nums[j]==2){
                k--;
                swap(nums[j],nums[k]);
            }
            
            else
                j++;
            
        }
    }
};