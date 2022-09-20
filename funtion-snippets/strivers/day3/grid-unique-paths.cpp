#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 int uniquePaths(int m, int n) {
        m--;
        n--;
        long int res=1;
        long int t =m+n;
        
        while(t>max(m,n)){
            res*=t;
            t--;
        }
        
        long int d = 1;
        while(min(m,n)>0){
            d*=min(m,n);
            m--;
            n--;
        }
        
        return (int)(res/d);
}

// dp
 int dp[101][101];
    int solve(int m, int n) {
       if(m==1 || n==1)
           return 1;
        if(dp[m][n]!=-1)
            return dp[m][n];
        return dp[m][n] = solve(m-1,n) + solve(m,n-1);
       
    }

    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return solve(m,n);
       
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}