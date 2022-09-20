#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 int trap(vector<int>& height) {
        int n = height.size();
        int rm =0;
        vector<int> rmax(n);
        for(int i=n-1;i>=0;i--){
            rm=max(rm,height[i]);
            rmax[i] = rm;
            
        }
        
        int lmax=0;
        
        int res=0;
        int j=0;
        for(auto i:height){
            lmax=max(lmax,i);
            res+= min(lmax,rmax[j])-i;
            j++;
            
        }
        
        return res;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}