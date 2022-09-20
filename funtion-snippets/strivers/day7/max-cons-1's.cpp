#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
int findMaxConsecutiveOnes(vector<int>& nums) {
    int mx = 0;
    int curr = 0;
    for(auto i:nums){
        if(i==0)
            curr=0;
        else
            curr++;
        mx = max(mx,curr);
    }
    
    return mx;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}