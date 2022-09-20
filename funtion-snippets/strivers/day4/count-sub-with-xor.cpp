#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
int solve(vector<int> &A, int B) {
    unordered_map<int,int> mp;
    
    int count = 0;
    int xr=0;
    for(int i=0;i<A.size();i++){
        xr^=A[i];
        if(xr==B)
            count++;
        if(mp.find(xr^ B)!=mp.end())
            count+=mp[xr^B];
        mp[xr]++;
        
    }
    
    return count;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}