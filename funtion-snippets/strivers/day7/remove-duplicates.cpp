#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
int removeDuplicates(vector<int>& nums) {
    if(nums.size()==0)
        return 0;
    int i=0;
    for(int j=1;j<nums.size();j++){
        if(nums[j]!=nums[j-1]){
            i++;
            nums[i]=nums[j];
        }
    }
    
    return i+1;
    
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}