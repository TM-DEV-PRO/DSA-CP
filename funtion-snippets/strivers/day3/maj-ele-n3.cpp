#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;

 vector<int> majorityElement(vector<int>& nums) {
        int can1 =INT_MAX, can2 =INT_MAX, c1=0,c2=0;
        for(auto i:nums){
            if(i==can1)
                c1++;
            else if(i==can2)
                c2++;
            else if(c1==0){
                can1=i;
                c1++;
            }
            
            else if(c2==0){
                can2=i;
                c2++;
            }
            
            else{
                c1--;
                c2--;
            }
            
        }
        vector<int> res;
        c1=0,c2=0;
        for(auto i:nums){
            if(i==can1)
                c1++;
            if(i==can2)
                c2++;
        }
        
        if(c1>nums.size()/3)
            res.push_back(can1);
        if(c2>nums.size()/3 && can2!=can1)
            res.push_back(can2);
        
        return res;
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}