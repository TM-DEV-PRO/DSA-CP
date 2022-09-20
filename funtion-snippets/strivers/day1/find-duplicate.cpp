#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
// without modiftying array
int findDuplicate(vector<int>& nums) {
     int tor = nums[0];
     int hare = nums[0];
        do{
            tor=nums[tor];
            hare=nums[nums[hare]];
        }while(tor!=hare);
        
        tor = nums[0];
        while(tor!=hare){
            tor=nums[tor];
            hare=nums[hare];
        }
        
        return hare;

}

int findDuplicate2(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
        if(nums[abs(nums[i])]<0)
            return abs(nums[i]);
        else
            nums[abs(nums[i])] = 0 - nums[abs(nums[i])];
    }
    
    return 0;
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}