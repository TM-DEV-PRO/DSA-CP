#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
int maxLen(int A[], int n)
{   unordered_map<int,int> mp;
    
    int mxln = 0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=A[i];
        if(sum==0)
            mxln=max(mxln,i+1);
        else if(mp.find(sum)!=mp.end())
            mxln = max(mxln,i-mp[sum]);
        else mp[sum] = i;
    }
    
    return mxln;
    // Your code here
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}