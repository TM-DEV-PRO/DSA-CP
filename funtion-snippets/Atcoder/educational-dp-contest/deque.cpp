
#include<bits/stdc++.h>
using namespace std;

long long int dp[3005][3005];
long long int solve(vector<long long int> &num,int i,int j){
   
    if(i==j){
        return dp[i][j] = num[i];
    }
        if(dp[i][j]!=-1)return dp[i][j];
     
        
        return dp[i][j] = max(num[i]-solve(num,i+1,j),num[j]-solve(num,i,j-1));
}

long long int solve2(vector<long long int> &num,int n){
    long long int dp[n][n];
    memset(dp,0,sizeof(dp));
    for(int i=n-1;i>=0;i--){
        for(int j=i;j<n;j++){
            if(i==j)
                dp[i][j] = num[i];
            else{
                dp[i][j] = max(num[i]-dp[i+1][j],num[j]-dp[i][j-1]);
            }
        }
    }

    return dp[0][n-1];
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;

vector<long long int> num(n);

for(auto &i:num)cin>>i;
memset(dp,-1,sizeof(dp));
//cout<<solve2(num,n);
cout<<solve(num,0,n-1);

return 0;
}