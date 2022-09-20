class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int res = 0;
        for(int i=0;i<nums1.size();i++){

            int l=0, r=nums2.size()-1,pos;

            while(l<=r){
                int mid  = l + (r-l)/2;
                
                if(nums2[mid]==nums1[i]){
                    if(mid==nums2.size()-1 || nums2[mid]!=nums2[mid+1]){
                        pos=mid;
                        break;
                    }
                    
                    else{
                        pos=mid;
                        l=mid+1;
                    }
                        
                }
                
                else if(nums2[mid]<nums1[i]){
                    pos=mid;
                    r=mid-1;
                    
                }
                
                else{
                    pos=mid;
                    l=mid+1;
                }
            }
            if(nums2[pos]>nums1[i] && pos!=nums2.size()-1)
                pos++;
            if(nums2[pos]<nums1[i])
                pos--;
            res = max(res,pos-i);
            //cout<<pos<<" ";
        }
        
        return res;
    }
};