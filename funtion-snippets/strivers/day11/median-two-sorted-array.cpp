#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int m = nums1.size(), n=nums2.size();
        
        if(m==0){
            if(n%2!=0)
                return nums2[n/2];
            else
                return (nums2[n/2-1] + nums2[n/2])/2.0; 
        }
        if(n==0){
            if(m%2!=0)
                return nums1[m/2];
            else
                return (nums1[m/2-1] + nums1[m/2])/2.0; 
        }
        int mn = min(nums1[0],nums2[0]);
        int mx = max(nums1[m-1],nums2[n-1]);
        int pos = (m+n+1)/2;
        int med1,med2;
        while(mn<mx){
            int x = mn + (mx-mn)/2;
            
            int count = 0;
            count += upper_bound(nums1.begin(),nums1.end(),x) - nums1.begin();
            count += upper_bound(nums2.begin(),nums2.end(),x) - nums2.begin();
            
            if(count<pos)
                mn=x+1;
            else
                mx=x;        
        }
         med1 = mn;
        if((m+n)%2==0){
         mn = min(nums1[0],nums2[0]);
         mx = max(nums1[m-1],nums2[n-1]);
         pos++;
         
        while(mn<mx ){
            int x = mn + (mx-mn)/2;
            
            int count = 0;
            count += upper_bound(nums1.begin(),nums1.end(),x) - nums1.begin();
            count += upper_bound(nums2.begin(),nums2.end(),x) - nums2.begin();
            
            if(count<pos)
                mn=x+1;
            else
                mx=x;        
        }
        }
        med2=mn;
        
        return (med1+med2)/2.0;
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}