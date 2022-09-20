#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int arr[10001] = {-1};
        
        stack<int> st;
        
        for(int i=nums2.size()-1;i>=0;i--){
            
            while(!st.empty() && nums2[i]>st.top())
                st.pop();
            
            arr[nums2[i]] = (st.empty())?-1:st.top();
            
            st.push(nums2[i]);
                
            
        }
        
        for(auto &i:nums1)
            i=arr[i];
        
        return nums1;
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}